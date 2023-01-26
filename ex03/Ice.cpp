#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	*this = obj;
}

Ice &Ice::operator=(const Ice &obj)
{
	this->type = obj.type;
	return (*this);
}

Ice::~Ice(void) {}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() << "*\"\n";
}
