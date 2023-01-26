#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "default";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	this->type = obj.getType();
	return (*this);
}

AMateria::~AMateria(void) {}

void	AMateria::setType(std::string const & _type)
{
	this->type = _type;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << this->type << " has not motion.\n";
}
