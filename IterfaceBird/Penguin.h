#pragma once
#include "IBird.h"
#include <iostream>
class Penguin : public IBird
{
public:
	void Swim();
	void Go() override;
	void Eat() override;
	void Sound() override;
};

