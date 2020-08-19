#pragma once
#include <iostream>

class AbstractProductA {
public:
	virtual ~AbstractProductA() {};
	virtual void doStuff() = 0;
};