#ifndef ICE_H
#define ICE_H


#include "AMateria.h"

class Ice : public AMateria {
public:
	Ice();
	Ice(const std::string& type);
	Ice(Ice const &);
	virtual ~Ice();
	Ice& operator=(Ice const &);

	AMateria *clone() const;
	void use(ICharacter &target);
};


#endif
