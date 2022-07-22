#ifndef CURE_H
#define CURE_H
#include "AMateria.h"


class Cure : public AMateria {
public:
	Cure();
	Cure(const std::string& type);
	Cure(Cure const &);
	~Cure();
	Cure& operator=(Cure const &);

	AMateria *clone() const;
	void use(ICharacter &target);
};


#endif
