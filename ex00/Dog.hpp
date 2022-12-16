#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const std::string& type);
	Dog(Dog const &);
	Dog& operator=(Dog const &);
	~Dog();
	void makeSound() const;
};


#endif
