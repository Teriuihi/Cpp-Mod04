#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria() : type("default"){
	std::cout << "AMateria of type [" << type << "] created using default constructor" << std::endl;
}

AMateria::AMateria(const std::string &type) : type(type) {
	std::cout << "AMateria of type [" << type << "] created using type constructor" << std::endl;
}

AMateria::AMateria(const AMateria &aMateria) {
	*this = aMateria;
	std::cout << "AMateria of type [" << type << "] created using copy constructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
	std::cout << "AMateria of type [" << type << "] copied with assignment operator" << std::endl;
	this->type = aMateria.type;
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria of type [" << type << "] deconstructed." << std::endl;
}

std::string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "using template materia" << std::cout;
}
