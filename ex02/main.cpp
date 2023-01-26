#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n\n";
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "\n\n";
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << "\n\n";
	// std::cout << meta->getType() << " " << std::endl;
	// meta->makeSound();
	
	// delete meta;
	// meta = NULL;
	delete j;
	j = NULL;
	delete i;
	i = NULL;

	return 0;
}
