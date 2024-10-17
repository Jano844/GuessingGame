
#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal& operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();
	void	setType(std::string type);
	std::string getType() const;
	void	makeSound() const;
};


#endif