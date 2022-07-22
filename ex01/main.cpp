#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* animals[100];

	Dog* d1 = new Dog();
	Dog* d2 = new Dog(*d1);
	delete d1;
	delete d2;

	for (int i = 0; i < 10; i++)
		animals[i] = (i % 2 ? (Animal *) (new Cat()) : new Dog());
	for (int i = 0; i < 10; i++)
		delete animals[i];

	return 0;
}