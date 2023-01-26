#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat default constructor called.\n";
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	*this = obj;
	std::cout << "Cat copy constructor called.\n";
}

Cat	&Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	std::cout << "Cat copy assignment operator.\n";
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called.\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "...meow...\n";
}
