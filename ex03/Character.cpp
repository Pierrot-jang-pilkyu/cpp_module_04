#include "Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; ++i)
	{
		this->inventory[i] = new AMateria();
	}
	this->name = "No name";
}

Character::Character(std::string const &_name)
{
	for (int i = 0; i < 4; ++i)
	{
		this->inventory[i] = new AMateria();
	}
	this->name = _name;
}

Character::Character(const Character &obj)
{
	*this = obj;
}

Character &Character::operator=(const Character &obj)
{
	for (int i = 0; i < 4; ++i)
	{
		delete this->inventory[i];
		this->inventory[i] = new AMateria(obj.inventory[i]);
	}
	this->name = obj.name;
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
	{
		delete this->inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		std::string temp = this->inventory[i]->getType();
		if (temp.compare("default") == 0)
		{
			this->inventory[i]->setType(m->getType());
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || 4 <= idx)
	{
		std::cout << "this idx isn't exist.\n";
		return ;
	}
	this->inventory[idx]->setType("defualt");
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || 4 <= idx)
	{
		std::cout << "this idx isn't exist.\n";
		return ;
	}
	this->inventory[idx]->use(target);
}
