#include "SingletonImpl.h"

SingletonImpl* SingletonImpl::singleton = nullptr;

SingletonImpl* SingletonImpl::getInstance(const std::string& value)
{
	/**
	 * This is a safer way to create an instance. instance = new Singleton is
	 * dangeruous in case two instance threads wants to access at the same time
	 */
	if (singleton == nullptr) {
		singleton = new SingletonImpl(value);
	}
	return singleton;
}

std::string SingletonImpl::value()
{
	return value_;
}
