#ifndef AMATERIA_H
#define AMATERIA_H


#include <string>
#include "ICharacter.h"

class AMateria {
private:
	AMateria();
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &);
	AMateria& operator=(AMateria const &);
	~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif