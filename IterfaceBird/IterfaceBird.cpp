#include <iostream>
#include "Duck.h"
#include "Chicken.h"
#include "Parrot.h"
#include "Penguin.h"
#include "IBird.h"
using namespace std;

int main()
{
    Duck duck;
    Penguin penguin;
    Parrot parrot;
    Chicken chicken;
    cout << "Does the chicken fly? - " << boolalpha << chicken.Fly() << endl;
    cout << "Does the penguin fly? - " << boolalpha << penguin.Fly() << endl;
    cout << "Does the duck fly? - " << boolalpha << duck.Fly() << endl;
    cout << "Does the parrot fly? - " << boolalpha << parrot.Fly() << endl;
    
}