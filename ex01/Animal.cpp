#include <iostream>
#include "Animal.h"

Animal::Animal() : type("secretly a dolphin"){
	std::cout << "Animal of type [" << type << "] created with default constructor." << std::endl;
}

Animal::Animal(const std::string &type) : type(type) {
	std::cout << "Animal of type [" << type << "] created with type constructor." << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal of type [" << type << "] created with copy constructor." << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal of type [" << type << "] copied with assignment operator." << std::endl;
	this->type = animal.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal of type [" << type << "] deconstructed." << std::endl;
}

void Animal::makeSound() const {
	std::cout << "So long and thanks for all the fish." << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}
