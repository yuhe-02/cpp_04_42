#include "../../includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat: " << "Default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
	this->type = other.type;
	std::cout << "WrongCat: " << "Copy Constructor called." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: " << "Destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << this->getType() << ": "<< "Meow! Meow!" << std::endl;
}