#include <iostream>
#include "Dog.h"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog of type [" << type << "] created with default constructor." << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type) {
	std::cout << "Dog of type [" << type << "] created with type constructor." << std::endl;
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog of type [" << type << "] created with copy constructor." << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog of type [" << type << "] copied with assignment operator." << std::endl;
	this->type = dog.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog of type [" << type << "] deconstructed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "*Angry barking at Cat*" << std::endl;
}


