#ifndef HARACTER_H
#define HARACTER_H
#include "ICharacter.h"

class Character : public ICharacter {
private:
	Character();
	static const int iSize = 4;
	char pos;
	std::string name;
	AMateria **inventory;
public:
	Character(std::string name);
	Character(const Character &character);
	~Character();
	Character &operator=(const Character &character);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};



#endif
