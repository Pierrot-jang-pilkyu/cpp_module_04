#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::string str;
	Animal *meta[2];

	meta[0] = new Dog();
	meta[1] = new Cat();

	std::cout << "\n";
	
	for (int i = 0; i < 2; ++i)
	{
		delete meta[i];
	}
	std::cout << "\n";
	

	// Animal *d = new Dog();
	// Animal *d2 = new Dog();
	Dog *d = new Dog();
	Dog *d2 = new Dog();
	std::cout << "\n";

	str = d->getBrain()->getIdeas(0);
	std::cout << "Dog1's first idea is "<< str << std::endl << std::endl;

	d->getBrain()->setIdeas("Pig bone", 0);
	str = d->getBrain()->getIdeas(0);
	std::cout << "Dog1's first idea is "<< str << std::endl << std::endl;
	str = d->getBrain()->getIdeas(1);
	std::cout << "Dog1's second idea is "<< str << std::endl << std::endl;

	*d2 = *d;
	str = d2->getBrain()->getIdeas(0);
	std::cout << "Dog2's first idea is "<< str << std::endl << std::endl;
	std::cout << "\n";

	// Animal *c = new Cat();
	// Animal *c2 = new Cat();
	Cat *c = new Cat();
	Cat *c2 = new Cat();
	std::cout << "\n";
	str = c->getBrain()->getIdeas(0);
	std::cout << "Cat1's first idea is "<< str << std::endl << std::endl;

	c->getBrain()->setIdeas("Chur", 0);
	str = c->getBrain()->getIdeas(0);
	std::cout << "Cat1's first idea is "<< str << std::endl << std::endl;
	str = c->getBrain()->getIdeas(1);
	std::cout << "Cat1's second idea is "<< str << std::endl << std::endl;

	*c2 = *c;
	str = c2->getBrain()->getIdeas(0);
	std::cout << "Cat2's first idea is "<< str << std::endl;

	std::cout << "\n\n";
	delete d;
	d = NULL;
	delete d2;
	d2 = NULL;
	delete c;
	c = NULL;
	delete c2;
	c2 = NULL;

	return (0);
}
