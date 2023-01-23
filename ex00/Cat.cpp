#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat of type [" << type << "] created with default constructor." << std::endl;
}

Cat::Cat(const Cat &cat) {
	*this = cat;
	std::cout << "Cat of type [" << type << "] created with copy constructor." << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	this->type = cat.type;
	std::cout << "Cat of type [" << type << "] copied with assignment operator." << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat of type [" << type << "] deconstructed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "*Angry hissing at Dog*" << std::endl;
}

