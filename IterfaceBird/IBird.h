#pragma once
class IBird
{
public:
	virtual bool Fly() = 0;
	virtual bool Swim() = 0;
	virtual void Sound() = 0;
	virtual void Eat() = 0;
	virtual void Go() = 0;
};

