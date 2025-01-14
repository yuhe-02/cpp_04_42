#include "../../includes/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("all"){
	std::cout << "WrongAnimal: " << "Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
	std::cout << "WrongAnimal: " << "Copy Constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: " << "Destructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal: " << "Copy assignment operator called." << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const{
	std::cout << "I am alive." << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (this->type);
}