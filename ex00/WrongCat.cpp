#include <iostream>
#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat of type [" << type << "] created with default constructor." << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type) {
	std::cout << "WrongCat of type [" << type << "] created with type constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) {
	std::cout << "WrongCat of type [" << type << "] created with copy constructor." << std::endl;
	*this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
	std::cout << "WrongCat of type [" << type << "] copied with assignment operator." << std::endl;
	this->type = cat.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat of type [" << type << "] deconstructed." << std::endl;
}

