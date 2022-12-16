#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : pos(0) {
	std::cout << "MateriaSource created using default constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	*this = materiaSource;
	std::cout << "MateriaSource created using copy constructor" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	pos = materiaSource.pos;
	std::cout << "MateriaSource copied with assignment operator" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource deconstructed." << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (pos == 4)
		return; //TODO check if this is correct behavior
	memory[pos++] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < pos; i++) {
		if (memory[i]->getType() == type)
			return memory[i];
	}
	return nullptr;
}
