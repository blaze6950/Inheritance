#include "Person.h"


Person::~Person()
{
	delete _name;
	_name = nullptr;
}
