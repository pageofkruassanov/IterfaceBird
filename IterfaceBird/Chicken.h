#pragma once
#include "IBird.h"
#include <iostream>
class Chicken : public IBird
{
public:
	void Go() override;
	void Eat() override;
	void Sound() override;
};

