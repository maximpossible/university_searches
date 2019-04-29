//Container.h

#ifndef CONTAINER_H
#define CONTAINER_H

#include <array>

class Container
{
public:
    Container();
    void Show();
    void FibonacciSearch();


private:
    size_t GetFibonacci(std::size_t index);

private:
    const static std::size_t N1 = 20;  //1500
    const static std::size_t N2 = 3500;
    const static std::size_t N3 = 6000;

    const static std::size_t LIMITER = 100;

private:
    std::array<int, N1> small_container;
    std::array<int, N2> medium_container;
    std::array<int, N3> large_container;

};

#endif // CONTAINER_H
