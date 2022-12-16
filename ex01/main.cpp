#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const Animal* animals[100];

	Dog* d1 = new Dog();
	Dog d2 = Dog(*d1);
	Cat cat = Cat("weird type");
	Cat cat2 = cat;

	std::cout << "d1\t" << d1->getBrain() << "\nd2\t" << d2.getBrain() << std::endl;
	std::cout << "cat 1\t" << cat.getBrain() << "\ncat 2\t" << cat2.getBrain() << std::endl;
	delete d1;

	for (int i = 0; i < 10; i++)
		animals[i] = (i % 2 ? (Animal *) (new Cat()) : new Dog());
	for (int i = 0; i < 10; i++)
		delete animals[i];

	return 0;
}