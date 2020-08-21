#include "ConcreteBuilder2.h"

void ConcreteBuilder2::reset()
{
	result = "";
}

void ConcreteBuilder2::stepA()
{
	result += " ConcreteBuilder2::STEP1 ";
}

void ConcreteBuilder2::stepB()
{
	result += " ConcreteBuilder2::STEPB ";
}

std::string ConcreteBuilder2::getResult()
{
	return result;
}
