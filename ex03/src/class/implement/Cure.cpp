#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure") {
	std::cout << "Cure: " << "Default Constructor called." << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other) {
	std::cout << "Cure: " << "Copy Constructor called." << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure: " << "Destructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	std::cout << "Cure: " << "Copy assignment operator called." << std::endl;
	return (*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "Cure: " << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure* Cure::clone() const {
	Cure *cure = new Cure(*this);
	return (cure);
}
