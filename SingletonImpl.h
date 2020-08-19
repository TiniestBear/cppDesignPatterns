#pragma once

#include <string>

class SingletonImpl {
protected:
	SingletonImpl(const std::string value) : value_(value) {}

	std::string value_;

	static SingletonImpl* singleton;
public:
	SingletonImpl(SingletonImpl& other) = delete;

	static SingletonImpl* getInstance(const std::string& value);

	void someBusinessLogic() {}

	std::string value();
};