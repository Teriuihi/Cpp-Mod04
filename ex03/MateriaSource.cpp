#include <iostream>
#include "MateriaSource.h"

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

}

AMateria *MateriaSource::createMateria(const std::string &type) {
	return NULL;
}
