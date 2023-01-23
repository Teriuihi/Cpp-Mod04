#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	brain = new Brain();
	std::cout << "Dog of type [" << type << "] created with default constructor." << std::endl;
}

Dog::Dog(const Dog &dog) {
	*this = dog;
	std::cout << "Dog of type [" << type << "] created with copy constructor." << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	this->type = dog.type;
	delete this->brain;
	this->brain = new Brain(*dog.brain);
	std::cout << "Dog of type [" << type << "] copied with assignment operator." << std::endl;
	return *this;
}

Brain *Dog::getBrain() {
	return this->brain;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog of type [" << type << "] deconstructed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "*Angry barking at Cat*" << std::endl;
}


