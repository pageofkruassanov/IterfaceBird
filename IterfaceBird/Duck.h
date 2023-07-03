#pragma once
#include "IBird.h"
#include <iostream>
class Duck : public IBird
{
public:
	void Fly();
	void Swim();
	void Go() override;
	void Eat() override;
	void Sound() override;
};

