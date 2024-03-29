#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"


class Cure : public AMateria {
public:
	Cure();
	Cure(const std::string& type);
	Cure(Cure const &);
	virtual ~Cure();
	Cure& operator=(Cure const &);

	AMateria *clone() const;
	void use(ICharacter &target);
};


#endif
