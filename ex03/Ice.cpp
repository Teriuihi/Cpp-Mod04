#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice of type [" << type << "] created using default constructor" << std::endl;
}

Ice::Ice(const std::string &type) : AMateria(type) {
	std::cout << "Ice of type [" << type << "] created using type constructor" << std::endl;
}

Ice::Ice(const Ice &ice) {
	*this = ice;
	std::cout << "Ice of type [" << type << "] created using copy constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &aMateria) {
	std::cout << "Ice of type [" << type << "] copied with assignment operator" << std::endl;
	this->type = aMateria.type;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice of type [" << type << "] deconstructed." << std::endl;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
