#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materia_source[4];

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &obj);
	MateriaSource	&operator=(const MateriaSource &obj);
	~MateriaSource(void);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif
