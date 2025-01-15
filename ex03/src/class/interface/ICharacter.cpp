#include "ICharacter.hpp"
#include <iostream>

ICharacter::ICharacter() {
	std::cout << "ICharacter: " << "Default Constructor called." << std::endl;
}

ICharacter::ICharacter(const ICharacter &other) {
	*this = other;
	std::cout << "ICharacter: " << "Copy Constructor called." << std::endl;
}

ICharacter::~ICharacter() {
	std::cout << "ICharacter: " << "Destructor called." << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &other) {
	(void)other;
	std::cout << "ICharacter: " << "Copy assignment operator called." << std::endl;
	return (*this);
}
