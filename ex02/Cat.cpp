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
	delete this->brain;
	this->brain = new Brain(*cat.brain);
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat of type [" << type << "] copied with assignment operator." << std::endl;
	this->type = cat.type;
	delete this->brain;
	this->brain = new Brain(*cat.brain);;
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

