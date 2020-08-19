#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductB1.h"

class ConcreteFactoryB : public AbstractFactory {
public:
	AbstractProductA* CreateProductA() const override;

	AbstractProductB* CreateProductB() const override;
};