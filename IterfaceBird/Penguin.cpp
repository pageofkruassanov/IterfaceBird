#include "Penguin.h"

bool Penguin::Fly()
{
    return false;
}

bool Penguin::Swim()
{
    return true;
}

void Penguin::Go()
{
    std::cout << "The penguin is walking" << std::endl;
}

void Penguin::Eat()
{
    std::cout << "Penguin eats" << std::endl;
}

void Penguin::Sound()
{
    std::cout << "*CRY*" << std::endl;
}
