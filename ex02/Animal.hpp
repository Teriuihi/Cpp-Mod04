#ifndef ANIMAL_H
#define ANIMAL_H


#include <string>

class Animal {
protected:
	std::string type;
	Animal();
	Animal(const std::string& type);
public:
	Animal(Animal const &);
	Animal& operator=(Animal const &);
	virtual ~Animal();

	virtual void makeSound() const;

	const std::string &getType() const;
};


#endif
