#include "../../includes/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat: " << "Default Constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
	this->type = other.type;
	std::cout << "Cat: " << "Copy Constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: " << "Destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		this->type = other.type;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << this->getType() << ": "<< "Meow! Meow!" << std::endl;
}