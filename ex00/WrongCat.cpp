
#include "WrongCat.hpp"

WrongCat::WrongCat() : _wrongSound("not miau")
{
	std::cout << "WrongCat got created\n";
	WrongAnimal::setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other), _wrongSound(other._wrongSound)
{
	std::cout << "Copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Assignment operator called\n";
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat got destroyed\n";
}

void WrongCat::makeSound() const
{
	std::cout << this->_wrongSound << std::endl;
}
