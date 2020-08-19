#pragma once
#include <iostream>

class AbstractProductB {
public:
	virtual ~AbstractProductB() {};
	virtual void doStuff() = 0;
};