#include "Proto2.h"

Proto* Proto2::clone() const
{
	return new Proto2(*this);
}
