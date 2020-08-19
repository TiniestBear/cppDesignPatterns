#include "Proto1.h"

Proto* Proto1::clone() const
{
	return new Proto1(*this);
}
