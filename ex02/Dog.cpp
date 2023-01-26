#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
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
	this->brain = obj.brain;
	this->type = obj.type;
	std::cout << "Dog copy assignment operator.\n";
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called.\n";
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bowwow!!\n";
}
Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
