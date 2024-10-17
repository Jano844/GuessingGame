
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* cat1 = new Cat();
	cat1->makeSound();
	Cat cat;
	cat.setType("Katze");
	cat.makeSound();

	std::cout << cat.getType() << std::endl << std::endl;

	Cat cat2;
	cat2 = cat;
	std::cout << cat2.getType() << std::endl << std::endl;
	
	delete cat1;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;




	WrongCat*  wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << std::endl;
	wrongCat->makeSound();

	WrongAnimal*  wrongAnimal = new WrongCat();
	std::cout << wrongAnimal->getType() << "test" << std::endl;
	wrongAnimal->makeSound();

	std::cout << std::endl;

	delete wrongCat;
	delete wrongAnimal;
	return 0;
}