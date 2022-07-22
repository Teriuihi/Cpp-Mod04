#include <iostream>
#include "Cure.h"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure of type [" << type << "] created using default constructor" << std::endl;
}

Cure::Cure(const std::string &type) : AMateria(type) {
	std::cout << "Cure of type [" << type << "] created using type constructor" << std::endl;
}

Cure::Cure(const Cure &cure) {
	*this = cure;
	std::cout << "Cure of type [" << type << "] created using copy constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &aMateria) {
	std::cout << "Cure of type [" << type << "] copied with assignment operator" << std::endl;
	this->type = aMateria.type;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure of type [" << type << "] deconstructed." << std::endl;
}

AMateria *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
