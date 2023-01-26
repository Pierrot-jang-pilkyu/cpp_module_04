#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called.\n";
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	*this = obj;
	std::cout << "WrongCat copy constructor called.\n";
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.type;
	std::cout << "WrongCat copy assignment operator.\n";
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called.\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "......\n";
}
