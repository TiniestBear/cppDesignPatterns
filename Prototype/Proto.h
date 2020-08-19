#pragma once
#include <string>
#include <iostream>

class Proto {
protected:
	std::string proto_name_;
public:
	Proto() {}
	Proto(std::string proto_name) :proto_name_(proto_name) {}
	virtual ~Proto() {}
	virtual Proto* clone() const = 0;
	void printName() const;
};