#ifndef ANIMAL_H
#define ANIMAL_H


#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const std::string& type);
	Animal(Animal const &);
	Animal& operator=(Animal const &);
	~Animal();

	virtual void makeSound() const;

	const std::string &getType() const;
};


#endif
