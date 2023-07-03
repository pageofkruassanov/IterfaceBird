#include "Duck.h"

bool Duck::Fly()
{
    return true;
}

bool Duck::Swim()
{
    return true;
}

void Duck::Go()
{
    std::cout << "The duck is walking" << std::endl;
}

void Duck::Eat()
{
    std::cout << "Duck eats" << std::endl;
}

void Duck::Sound()
{
    std::cout << "Crya-crya" << std::endl;
}
