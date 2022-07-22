#include <iostream>
#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : type("secretly a turtle"){
	std::cout << "WrongAnimal of type [" << type << "] created with default constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type) {
	std::cout << "WrongAnimal of type [" << type << "] created with type constructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	std::cout << "WrongAnimal of type [" << type << "] created with copy constructor." << std::endl;
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
	std::cout << "WrongAnimal of type [" << type << "] copied with assignment operator." << std::endl;
	this->type = animal.type;
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
