#include "ProtoFactory.h"

ProtoFactory::ProtoFactory() {
	prototypes_[ProtoType::PROTO1] = new Proto1("PROTOTYPE_1", 12);
	prototypes_[ProtoType::PROTO2] = new Proto2("PROTOTYPE_2", 23);
}

ProtoFactory::~ProtoFactory()
{
	delete prototypes_[ProtoType::PROTO1];
	delete prototypes_[ProtoType::PROTO2];
}

Proto* ProtoFactory::createProto(ProtoType type)
{
	return prototypes_[type]->clone();
}