#include "ConcreteFactoryB.h"

AbstractProductA* ConcreteFactoryB::CreateProductA() const
{
	return nullptr;
}

AbstractProductB* ConcreteFactoryB::CreateProductB() const
{
	return new ConcreteProductB1();
}
