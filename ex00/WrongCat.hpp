#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const std::string& type);
	WrongCat(WrongCat const &);
	WrongCat& operator=(WrongCat const &);
	~WrongCat();
};


#endif
