#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = "Default";
	}
	std::cout << "Brain default constructor called.\n";
}

Brain::Brain(const Brain &obj)
{
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy constructor called.\n";
}

Brain &Brain::operator=(const Brain &obj)
{
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = obj.ideas[i];
	}
	std::cout << "Brain copy assignment operator.\n";
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called.\n";
}

std::string Brain::getIdeas(int n) const
{
	return (this->ideas[n]);
}

void	Brain::setIdeas(std::string idea, int n)
{
	this->ideas[n] = idea;
}
