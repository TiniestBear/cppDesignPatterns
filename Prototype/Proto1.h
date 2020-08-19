#pragma once
#include "Proto.h"
#include <string>

class Proto1 : public Proto {
private:
	int someField;
public:
	Proto1(std::string proto_name, int someValue) : Proto(proto_name), someField(someValue) {}
	Proto* clone() const override;
};