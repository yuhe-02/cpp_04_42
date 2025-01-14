#include "../../includes/Animal.hpp"
#include <iostream>

Animal::Animal() : brain(0), type("all") {
	std::cout << "Animal: " << "Default Constructor called." << std::endl;
}

Animal::Animal(const Animal &other) : brain(other.brain), type(other.type) {
	std::cout << "Animal: " << "Copy Constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal: " << "Destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		this->brain = other.brain;
		this->type = other.type;
	}
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "I am alive." << std::endl;
}

std::string Animal::getType( void ) const {
	return (this->type);
}

void Animal::showBrain( void ) const {
	if (!this->brain) {
		std::cout << "Animal: " << "doesn't have brain." << std::endl;
		return ;
	}
	this->brain->showAll();
}