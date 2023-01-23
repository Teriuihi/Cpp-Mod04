#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat of type [" << type << "] created with default constructor." << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type) {
	std::cout << "WrongCat of type [" << type << "] created with type constructor." << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) {
	*this = cat;
	std::cout << "WrongCat of type [" << type << "] created with copy constructor." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
	this->type = cat.type;
	std::cout << "WrongCat of type [" << type << "] copied with assignment operator." << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat of type [" << type << "] deconstructed." << std::endl;
}

