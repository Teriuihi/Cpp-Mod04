#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	brain = new Brain();
	std::cout << "Cat of type [" << type << "] created with default constructor." << std::endl;
}

Cat::Cat(const Cat &cat) {
	*this = cat;
	std::cout << "Cat of type [" << type << "] created with copy constructor." << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	this->type = cat.type;
	delete this->brain;
	this->brain = new Brain(*cat.brain);;
	std::cout << "Cat of type [" << type << "] copied with assignment operator." << std::endl;
	return *this;
}

Brain *Cat::getBrain() {
	return this->brain;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat of type [" << type << "] deconstructed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "*Angry hissing at Dog*" << std::endl;
}

