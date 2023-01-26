#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
	{
		this->materia_source[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	for (int i = 0; i < 4; ++i)
	{
		this->materia_source[i] = obj.materia_source[i];
	}
}

MateriaSource::~MateriaSource(void) {}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->materia_source[i] == NULL)
		{
			this->materia_source[i] = m;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->materia_source[i]->getType().compare(type) == 0)
		{
			return (this->materia_source[i]);
		}
	}
}
