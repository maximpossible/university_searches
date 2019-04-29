//Container.cpp

#include <iostream>
#include <random>
#include <time.h>
#include <array>

#include "../include/Container.h"


Container::Container()
{
    srand(time(0));

    //Инициализация массивов
    std::size_t random_number;
    for (std::size_t i = 0; i < N3; ++i)
    {
        random_number = rand() % LIMITER;
        if (i < N1)
        {
            small_container[i] = random_number;
        }
        if (i < N2)
        {
            medium_container[i] = random_number;
        }
        if (i < N3)
        {
            large_container[i] = random_number;
        }
    }
}


void Container::Show()
{
    std::cout << "Small Container: " << std::endl;
    for (const auto& i : small_container)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}


void Container::FibonacciSearch()
{
    GetFibonacci(5);
}


size_t Container::GetFibonacci(std::size_t index)
{
    static std::array<std::size_t, N3> fibonacci = {1, 2};
    static std::size_t border = 1;

    if (index > border)
    {
        for (auto i = border + 1; i <= index; ++i)
        {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
        border = index;
        return fibonacci[index];
    }
    else
    {
        return fibonacci[index];
    }
}
