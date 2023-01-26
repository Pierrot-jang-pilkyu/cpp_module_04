#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor called.\n";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	*this = obj;
	std::cout << "Dog copy constructor called.\n";
}

Dog	&Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	std::cout << "Dog copy assignment operator.\n";
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called.\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Bowwow!!\n";
}
