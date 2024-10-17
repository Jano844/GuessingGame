
#include "Cat.hpp"

Cat::Cat() : _sound("miau")
{
	std::cout << "Cat got created\n";
	Animal::setType("Cat");
}

Cat::Cat(const Cat &other) : Animal(other), _sound(other._sound)
{
	std::cout << "Copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Assignment operator called\n";
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat got destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << this->_sound << std::endl;
}
