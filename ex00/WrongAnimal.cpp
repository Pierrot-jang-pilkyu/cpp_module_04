#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "";
	std::cout << "WrongAnimal default constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.type;
	std::cout << "WrongAnimal copy assignment.\n";
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called.\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Don't fix wronganimal tpye.\n";
}