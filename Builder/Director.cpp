#include "Director.h"

void Director::changeBuilder(IBuilder* builder)
{
	this->builder = builder;
}

void Director::make()
{
	builder->reset();
	builder->stepA();
	builder->stepB();
}
