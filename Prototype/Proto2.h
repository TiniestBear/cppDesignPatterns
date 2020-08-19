#pragma once
#include "Proto.h"
#include <string>

class Proto2 : public Proto {
private:
	int someField;
public:
	Proto2(std::string proto_name, int someValue) : Proto(proto_name), someField(someValue) {}
	Proto* clone() const override;
};