#include "ConcreteBuilder1.h"

void ConcreteBuilder1::reset()
{
	result = "";
}

void ConcreteBuilder1::stepA()
{
	result += " ConcreteBuilder1::STEP1 ";
}

void ConcreteBuilder1::stepB()
{
	result += " ConcreteBuilder1::STEPB ";
}

std::string ConcreteBuilder1::getResult()
{
	return result;
}
