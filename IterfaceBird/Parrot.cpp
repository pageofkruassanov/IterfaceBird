#include "Parrot.h"

bool Parrot::Fly()
{
    return true;
}

bool Parrot::Swim()
{
    return false;
}

void Parrot::Go()
{
    std::cout << "The parrot is walking" << std::endl;
}

void Parrot::Sound()
{
    std::cout << "I'm parrot" << std::endl;
}

void Parrot::Eat()
{
    std::cout << "Parrot eats" << std::endl;
}
