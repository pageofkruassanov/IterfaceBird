#pragma once
#include "IBird.h"
#include <iostream>
class Duck : IBird
{
public:
	bool Fly() override;
	bool Swim() override;
	void Go() override;
	void Eat() override;
	void Sound() override;
};

