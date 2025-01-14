#include "../../includes/WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog() : WrongAnimal() {
	this->type = "WrongDog";
	std::cout << "WrongDog: " << "Default Constructor called." << std::endl;
}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal(other) {
	this->type = other.type;
	std::cout << "WrongDog: " << "Copy Constructor called." << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog: " << "Destructor called." << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other) {
	std::cout << "WrongDog: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

void WrongDog::makeSound() const{
	std::cout << this->getType() << ": "<< "Woof! Woof!" << std::endl;
}