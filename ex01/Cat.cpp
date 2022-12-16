#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	brain = new Brain();
	std::cout << "Cat of type [" << type << "] created with default constructor." << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type) {
	brain = new Brain();
	std::cout << "Cat of type [" << type << "] created with type constructor." << std::endl;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat of type [" << type << "] created with copy constructor." << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat of type [" << type << "] copied with assignment operator." << std::endl;
	brain = new Brain(*cat.brain);;
	this->type = cat.type;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat of type [" << type << "] deconstructed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "*Angry hissing at Dog*" << std::endl;
}

