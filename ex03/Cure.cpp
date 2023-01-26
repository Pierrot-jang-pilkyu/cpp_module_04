#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(const Cure &obj)
{
	*this = obj;
}

Cure &Cure::operator=(const Cure &obj)
{
	this->type = obj.type;
	return (*this);
}

Cure::~Cure(void) {}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "Cure: \"* heals " << target.name << "’s wounds *\"\n";
}