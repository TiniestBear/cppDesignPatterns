#pragma once

class IBuilder {
public:
	virtual void reset() = 0;
	virtual void stepA() = 0;
	virtual void stepB() = 0;
};