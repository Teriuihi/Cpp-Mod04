#ifndef MATERIALSOURCE_H
#define MATERIALSOURCE_H
#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
private:
	static const int mSize = 4;
	AMateria *memory[MateriaSource::mSize];
	int pos;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	~MateriaSource();
	MateriaSource& operator=(MateriaSource const &);

	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);
};


#endif
