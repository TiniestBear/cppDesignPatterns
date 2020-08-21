#pragma once
#include "IBuilder.h"

class Director {
private:
	IBuilder* builder;
public:
	Director(IBuilder* builder) : builder(builder) {}
	void changeBuilder(IBuilder* builder);
	void make();
};