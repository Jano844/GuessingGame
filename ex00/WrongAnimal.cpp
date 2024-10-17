
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "wrongAnimal got created\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrongAnimal got destroyed\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
	std::cout << "Copy constructor operator called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

void WrongAnimal::setType(std::string _type)
{
	this->_type = _type;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
