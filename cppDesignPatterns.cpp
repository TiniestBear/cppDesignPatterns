// cppDesignPatterns.cpp : Defines the entry point for the application.
//

#include "cppDesignPatterns.h"
#include "SingletonImpl.h"
#include "Prototype/ProtoFactory.h"
#include "AbstractFactory/AbstractFactory.h"
#include "AbstractFactory/AbstractProductA.h"
#include "AbstractFactory/ConcreteFactoryA.h"
#include "Builder/ConcreteBuilder1.h"
#include "Builder/Director.h"

using namespace std;

void factoryClient(const AbstractFactory& factory) {
	AbstractProductA* product_a = factory.CreateProductA();
	AbstractProductB* product_b = factory.CreateProductB();
	if (product_a != nullptr) product_a->doStuff();
	if (product_b != nullptr) product_b->doStuff();

	delete product_a; delete product_b;
}

int main()
{
	cout << "Hello CMake." << endl;

	SingletonImpl* singleton = SingletonImpl::getInstance("japko");
	
	{	//PROTOTYPE
		ProtoFactory* prototype_factory = new ProtoFactory();
		Proto* prototype1 = prototype_factory->createProto(ProtoType::PROTO1);
		prototype1->printName();
		Proto* prototype2 = prototype_factory->createProto(ProtoType::PROTO2);
		prototype2->printName();
		delete prototype1; delete prototype2; delete prototype_factory;
	}

	{	//ABSTRACT FACTORY
		AbstractFactory* factory1 = new ConcreteFactoryA();
		factoryClient(*factory1);
		delete factory1;
	}

	{	//BUILDER
		ConcreteBuilder1* builder = new ConcreteBuilder1();
		Director* director = new Director(builder);
		director->make();
		std::cout << builder->getResult() << std::endl;
		delete builder;
		delete director;
	}



	return 0;
}
