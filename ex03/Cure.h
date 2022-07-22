#ifndef CURE_H
#define CURE_H
#include "AMateria.h"


class Cure : public AMateria {
	Cure();
	Cure(const std::string& type);
	Cure(Cure const &);
	Cure& operator=(Cure const &);
	~Cure();

};


#endif
