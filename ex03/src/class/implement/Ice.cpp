#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice: " << "Default Constructor called." << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other) {
	std::cout << "Ice: " << "Copy Constructor called." << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice: " << "Destructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	std::cout << "Ice: " << "Copy assignment operator called." << std::endl;
	return (*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "Ice: " << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice* Ice::clone() const {
	Ice *ice = new Ice(*this);
	return (ice);
}
