#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(): type_("") {
	std::cout << "AMateria: " << "Default Constructor called." << std::endl;
}

AMateria::AMateria(std::string const & type): type_(type) {
	std::cout << "AMateria: " << "Constructor with type called." << std::endl;
}

AMateria::AMateria(const AMateria &other): type_(other.type_) {
	std::cout << "AMateria: " << "Copy Constructor called." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria: " << "Destructor called." << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
	(void)other;
	std::cout << "AMateria: " << "Copy assignment operator called." << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type_);
}

void AMateria::use(ICharacter& target) {
	std::cout << "AMateria: " << target.getName() << " do something." << std::endl;
}
