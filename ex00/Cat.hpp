
#ifndef __CAT_H__
#define __CAT_H__
#include "Animal.hpp"

class Cat : public Animal
{
private:
	const std::string _sound;
public:
	Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	~Cat();
	void	makeSound() const;
};


#endif