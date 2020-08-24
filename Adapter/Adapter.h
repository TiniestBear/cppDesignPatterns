#pragma once
#include <string>
#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target {
private:
	Adaptee* adaptee_;

public:
	Adapter(Adaptee* adaptee) : adaptee_(adaptee) {}
	std::string request() const override;
};