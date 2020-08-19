#pragma once
#include "AbstractFactory.h"
#include "ConcreteProductA1.h"

class ConcreteFactoryA : public AbstractFactory {
public:
	AbstractProductA* CreateProductA() const override;

	AbstractProductB* CreateProductB() const override;
};