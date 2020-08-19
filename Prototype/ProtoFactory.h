#pragma once
#include <functional>
#include <unordered_map>
#include "Proto1.h"
#include "Proto2.h"

enum ProtoType {
	PROTO1,
	PROTO2
};

class ProtoFactory {
private:
	std::unordered_map<ProtoType, Proto*, std::hash<int>> prototypes_;
public:
	ProtoFactory();

	~ProtoFactory();

	Proto* createProto(ProtoType type);
};