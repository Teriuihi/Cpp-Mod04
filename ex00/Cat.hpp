#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const std::string& type);
	Cat(Cat const &);
	Cat& operator=(Cat const &);
	~Cat();
	void makeSound() const;
};


#endif
