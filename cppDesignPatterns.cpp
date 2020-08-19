// cppDesignPatterns.cpp : Defines the entry point for the application.
//

#include "cppDesignPatterns.h"
#include "SingletonImpl.h"
#include "Prototype/ProtoFactory.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	SingletonImpl* singleton = SingletonImpl::getInstance("japko");
	ProtoFactory* prototype_factory = new ProtoFactory();
	
	Proto* prototype1 = prototype_factory->createProto(ProtoType::PROTO1);
	prototype1->printName();

	Proto* prototype2 = prototype_factory->createProto(ProtoType::PROTO2);
	prototype2->printName();

	delete prototype1; delete prototype2; delete prototype_factory;

	return 0;
}
