#include <iostream>
#include "Character.hpp"

void copyInventory(AMateria **from, char fromPos, AMateria **to, char toPos) {
	for (int i = 0; i < fromPos; i++)
		delete to[i];
	for (int i = 0; i < toPos; i++)
		to[i] = from[i]->clone();
}

Character::Character() : pos(0), name("default") {
	std::cout << "Character created using default constructor" << std::endl;
}

Character::Character(std::string name) : pos(0), name(name) {
	std::cout << "Character created using name constructor" << std::endl;
}

Character::Character(const Character &character) {
	std::cout << "Character created using copy constructor" << std::endl;
	*this = character;
}

Character::~Character() {
	std::cout << "Character deconstructed" << std::endl;
}

Character &Character::operator=(const Character &character) {
	std::cout << "Character copied with assignment operator" << std::endl;
	copyInventory(character.inventory, character.pos, inventory, pos);
	pos = character.pos;
	name = character.name;
	return *this;
}

std::string const &Character::getName() const {
	return name;
}

void Character::equip(AMateria *m) {
	if (pos == 4)
		return;
	inventory[pos++] = m;
}

/**
 * Delete materia in inventory on pos idx, move all materia further into the inventory back one slot
 * @param idx index to delete from inventory
 */
void Character::unequip(int idx) { //TODO test
	if (idx >= pos)
		return;
	delete inventory[idx]; //TODO not allowed to use delete here
	for (int i = idx + 1; i < pos; i++) {
		inventory[i - 1] = inventory[i];
	}
	pos--;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= pos)
		return;
	inventory[pos]->use(target);
}
