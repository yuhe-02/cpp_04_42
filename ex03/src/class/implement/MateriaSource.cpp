#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(): IMateriaSource() {
	for (int i = 0; i < MAX_MATERIAL;i++) {
        this->equipments_[i] = 0;
		this->free_responsible_[i] = false;
    }
	std::cout << "MateriaSource: " << "Default Constructor called." << std::endl;
}
MateriaSource::~MateriaSource() {
	for (int i = 0; i < MAX_MATERIAL;i++) {
		if (this->equipments_[i] && this->equipments_[i]) {
        	delete this->equipments_[i];
		}
    }
	std::cout << "MateriaSource: " << "Destructor called." << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& other): IMateriaSource(other) {
	for (int i = 0; i < MAX_MATERIAL;i++) {
		if (other.equipments_[i]) {
        	this->equipments_[i] = (other.equipments_[i])->clone();
			this->free_responsible_[i] = true;
		}
    }
	std::cout << "MateriaSource: " << "Copy Constructor called." << std::endl;
}
MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
	IMateriaSource::operator=(other);
	for (int i = 0; i < MAX_MATERIAL;i++) {
		if (this->equipments_[i]) {
			delete this->equipments_[i];
			this->equipments_[i] = 0;
			this->free_responsible_[i] = false;
		}
		if (other.equipments_[i]) {
        	this->equipments_[i] = (other.equipments_[i])->clone();
			this->free_responsible_[i] = true;
		}
    }
	std::cout << "MateriaSource: " << "Copy assignment operator called." << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = 0;

	if (!m) {
		std::cout << "MateriaSource: " << "null Materia cannot be assigned." << std::endl;
		return ;
	}
	while ((this->equipments_)[i] != 0 && i < MAX_MATERIAL) {
		i++;
	}
	if (i >= MAX_MATERIAL) {
		std::cout << "MateriaSource: " << "Can't learn more than " << MAX_MATERIAL << " Materia" << std::endl;
		return ;
	}
	(this->equipments_)[i] = m;
	this->free_responsible_[i] = false;
	std::cout << "MateriaSource: " << "Materia " << m->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i;
	for (i = 0; i < MAX_MATERIAL; i++) {
		if (this->equipments_[i] && (this->equipments_[i])->getType() == type) {
			break;
		}
    }
	if (i >= MAX_MATERIAL) {
		std::cout << "MateriaSource: " << "Can't found Materia: " << type << std::endl;
		return (0);
	}
	return ((this->equipments_[i])->clone());
}