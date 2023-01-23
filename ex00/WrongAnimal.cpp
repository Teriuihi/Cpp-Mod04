#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("secretly a turtle"){
	std::cout << "WrongAnimal of type [" << type << "] created with default constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type) {
	std::cout << "WrongAnimal of type [" << type << "] created with type constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	*this = animal;
	std::cout << "WrongAnimal of type [" << type << "] created with copy constructor." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
	this->type = animal.type;
	std::cout << "WrongAnimal of type [" << type << "] copied with assignment operator." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal of type [" << type << "] deconstructed." << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "So long and thanks for all the sea food." << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return type;
}
