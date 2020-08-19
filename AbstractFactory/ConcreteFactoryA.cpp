#include "ConcreteFactoryA.h"

AbstractProductA* ConcreteFactoryA::CreateProductA() const
{
	return new ConcreteProductA1();
}

AbstractProductB* ConcreteFactoryA::CreateProductB() const
{
	return nullptr;
}
