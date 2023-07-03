#pragma once
#include "IBird.h"
#include <iostream>
class Parrot : public IBird
{
public:
	void Fly();
	void Go() override;
	void Eat() override;
	void Sound() override;
};

