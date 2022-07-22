#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H


#include <string>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(WrongAnimal const &);
	WrongAnimal& operator=(WrongAnimal const &);
	~WrongAnimal();

	void makeSound() const;

	const std::string &getType() const;
};


#endif
