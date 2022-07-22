#ifndef ICE_H
#define ICE_H


#include "AMateria.h"

class Ice : public AMateria {
	Ice();
	Ice(const std::string& type);
	Ice(Ice const &);
	Ice& operator=(Ice const &);
	~Ice();
};


#endif
