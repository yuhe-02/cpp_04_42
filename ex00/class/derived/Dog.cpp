#include "../../includes/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Dog: " << "Default Constructor called." << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
	this->type = other.type;
	std::cout << "Dog: " << "Copy Constructor called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: " << "Destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

void Dog::makeSound() const{
	std::cout << this->getType() << ": "<< "Woof! Woof!" << std::endl;
}