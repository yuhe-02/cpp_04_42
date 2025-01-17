#include "Character.hpp"
#include <iostream>

Character::Character(): ICharacter(), name_("anonymous") {
	for (int i = 0; i < MAX_EQUIP;i++) {
        this->equipments_[i] = 0;
		this->free_responsible_[i] = false;
    }
	std::cout << "Character: " << "Default Constructor called." << std::endl;
}
Character::Character(std::string const &name): ICharacter(), name_(name) {
	for (int i = 0; i < MAX_EQUIP;i++) {
        this->equipments_[i] = 0;
		this->free_responsible_[i] = false;
    }
	std::cout << "Character: " << "Constructor with name called." << std::endl;
}

Character::Character(const Character &other): ICharacter(other), name_(other.name_) {
	for (int i = 0; i < MAX_EQUIP;i++) {
		this->equipments_[i] = 0;
		this->free_responsible_[i] = false;
		if (other.equipments_[i]) {
			this->equipments_[i] = other.equipments_[i]->clone();
			this->free_responsible_[i] = true;
		}
    }
	std::cout << "Character: " << "Copy Constructor called." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < MAX_EQUIP; i++) {
    	if (this->equipments_[i] && this->free_responsible_[i]) {
			delete this->equipments_[i];
		}
    }
	std::cout << "Character: " << "Destructor called." << std::endl;
}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		ICharacter::operator=(other);
		this->name_ = other.name_;
		for (int i = 0; i < MAX_EQUIP;i++) {
			if (this->equipments_[i] && this->free_responsible_[i]) {
				delete this->equipments_[i];
			}
			this->equipments_[i] = 0;
			this->free_responsible_[i] = false;
			if (other.equipments_[i]) {
				this->equipments_[i] = (other.equipments_[i])->clone();
				this->free_responsible_[i] = true;
			}
		}
	}
	std::cout << "Character: " << "Copy assignment operator called." << std::endl;
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name_);
}

AMateria *Character::getEquipment(int idx) {
	if (idx < 0 || idx >= MAX_EQUIP || !(this->equipments_)[idx]) {
		std::cout << "Character: " << "Nothing found to get at index " << idx << std::endl;
		return (0);
	}
	std::cout << " warning: " << "You need to free this memory in the caller." << std::endl;
	free_responsible_[idx] = false;
	return ((this->equipments_)[idx]);
}

void Character::equip(AMateria* m) {
	int i = 0;

	if (!m) {
		std::cout << "Character: " << "null Materia cannot be assigned." << std::endl;
		return ;
	}
	while ((this->equipments_)[i] != 0 && i < MAX_EQUIP)
		i++;
	if (i >= MAX_EQUIP) {
		std::cout << "Character: " << "no more Materia cannot be assigned." << std::endl;
		return ;
	}
	this->equipments_[i] = m;
	this->free_responsible_[i] = false;
	std::cout << "Character: " << "Materia assigned in index: "<< i << "." << std::endl;
	return ;
}

// TODO define overloaded function
void Character::unequip(int idx) {
	if (idx < 0 || idx >= MAX_EQUIP) {
		std::cout << "Character: " << this->name_ << " failed to unequip(because of index out of range) in index:  " << idx << std::endl;
	} else if (!(this->equipments_)[idx]) {
		std::cout << "Character: " << this->name_ << " failed to unequip(because of null address) in index: " << idx << std::endl;
	} else {
		AMateria *ptr = (this->equipments_)[idx];
		std::cout << "Character: " << this->name_ << " unequipped " << ptr->getType() << " in index: "<< idx  << std::endl;
		if (this->free_responsible_[idx]) {
			std::cout << "warning: " 
			<< "If the address is not stored in the caller via 'getEquipment', it will cause a memory leak." 
			<< std::endl;
		}
		(this->equipments_)[idx] = 0;
		this->free_responsible_[idx] = false;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= MAX_EQUIP || !(this->equipments_)[idx]) {
		std::cout << "Character: " << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	std::cout << "Character: " << this->getName() << ": ";
	((this->equipments_)[idx])->use(target);
}
