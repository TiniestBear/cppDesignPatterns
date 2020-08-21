#pragma once
#include <string>
#include "IBuilder.h"

class ConcreteBuilder2 : public IBuilder {
private:
	std::string result = "";
public:
	void reset() override;
	void stepA() override;
	void stepB() override;
	std::string getResult();
};