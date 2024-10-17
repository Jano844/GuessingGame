
#include "Dog.hpp"

Dog::Dog() : _sound("bark")
{
	std::cout << "Dog got created\n";
	Animal::setType("Dog");
}

Dog::Dog(const Dog &other) : Animal(other), _sound(other._sound)
{
	std::cout << "Copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Assignment operator called\n";
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog got destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << this->_sound << std::endl;
}