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
#include "Adapter/Adapter.h"

using namespace std;

void factoryClient(const AbstractFactory& factory) {
	AbstractProductA* product_a = factory.CreateProductA();
	AbstractProductB* product_b = factory.CreateProductB();
	if (product_a != nullptr) product_a->doStuff();
	if (product_b != nullptr) product_b->doStuff();

	delete product_a; delete product_b;
}

void adapterClient(const Target* target) {
	std::cout << target->request() << std::endl;
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

	{	//ADAPTER
		std::cout << "Client: default target" << std::endl;
		Target* target = new Target;
		adapterClient(target);

		Adaptee* adaptee = new Adaptee;
		std::cout << "Client: adaptee target" << std::endl;
		std::cout << adaptee->specificRequest() << std::endl;
		
		Adapter* adapter = new Adapter(adaptee);
		std::cout << "Client: adaptee through adapter" << std::endl;
		adapterClient(adapter);

		delete target;
		delete adaptee;
		delete adapter;
	}



	return 0;
}
