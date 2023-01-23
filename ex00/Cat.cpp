#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat of type [" << type << "] created with default constructor." << std::endl;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat of type [" << type << "] created with copy constructor." << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat of type [" << type << "] copied with assignment operator." << std::endl;
	this->type = cat.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat of type [" << type << "] deconstructed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "*Angry hissing at Dog*" << std::endl;
}

