#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;
public:
	Cat();
	Cat(const std::string& type);
	Cat(Cat const &);
	Cat& operator=(Cat const &);
	~Cat();
	void makeSound() const;
};


#endif
