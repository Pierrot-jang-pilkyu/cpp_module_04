#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	type;

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &obj);
	AMateria	&operator=(const AMateria &obj);
	virtual ~AMateria(void);

	std::string const & getType() const; //Returns the materia type
	void	setType(std::string const & _type);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
