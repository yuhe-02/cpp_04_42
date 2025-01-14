#include "../../includes/Animal.hpp"
#include <iostream>

Animal::Animal() : type("all") {
	std::cout << "Animal: " << "Default Constructor called." << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout << "Animal: " << "Copy Constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal: " << "Destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

std::string Animal::getType( void ) const {
	return (this->type);
}