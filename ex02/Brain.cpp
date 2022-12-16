#include <iostream>
#include "Brain.hpp"

void copyIdeas(const std::string *from, std::string *to) {
	for (std::string::size_type i = 0; i < from->length(); i++) {
		to[i] = from[i];
	}
}

Brain::Brain() {
	std::cout << "Brain created with default constructor" << std::endl;
}

Brain::Brain(const std::string *ideas) {
	std::cout << "Brain created with ideas constructor" << std::endl;
	copyIdeas(ideas, this->ideas);
}

Brain::Brain(const Brain &brain) {
	std::cout << "Brain created with copy constructor" << std::endl;
	copyIdeas(brain.ideas, this->ideas);
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << "Brain copy operator called" << std::endl;
	copyIdeas(brain.ideas, this->ideas);
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain deconstructed" << std::endl;
}
