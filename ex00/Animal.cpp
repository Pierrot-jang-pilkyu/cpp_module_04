#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "";
	std::cout << "Animal default constructor called.\n";
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Animal copy constructor called.\n";
}

Animal	&Animal::operator=(const Animal &obj)
{
	this->type = obj.type;
	std::cout << "Animal copy assignment.\n";
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called.\n";
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Don't fix animal tpye.\n";
}
