#include "Character.hpp"
#include <iostream>

Character::Character(): ICharacter(), name_("anonymous"), equip_num_(0) {
	for (int i = 0; i < MAX_EQUIP;i++) {
        this->equipments_[i] = 0;
		this->free_responsible_[i] = false;
    }
	std::cout << "Character: " << "Default Constructor called." << std::endl;
}
Character::Character(std::string const &name): ICharacter(), name_(name), equip_num_(0) {
	for (int i = 0; i < MAX_EQUIP;i++) {
        this->equipments_[i] = 0;
		this->free_responsible_[i] = false;
    }
	std::cout << "Character: " << "Constructor with name called." << std::endl;
}

Character::Character(const Character &other): ICharacter(other), name_(other.name_), equip_num_(other.equip_num_) {
	for (int i = 0; i < MAX_EQUIP;i++) {
		this->equipments_[i] = 0;
		this->free_responsible_[i] = false;
		if (i < other.equip_num_) {
			this->equipments_[i] = other.equipments_[i]->clone();
			this->free_responsible_[i] = true;
		}
    }
	std::cout << "Character: " << "Copy Constructor called." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < this->equip_num_; i++) {
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
		this->equip_num_ = other.equip_num_;
		for (int i = 0; i < MAX_EQUIP;i++) {
			if (this->equipments_[i] && this->free_responsible_[i]) {
				delete this->equipments_[i];
			}
			this->equipments_[i] = 0;
			this->free_responsible_[i] = false;
			if (i < other.equip_num_) {
				this->equipments_[i] = other.equipments_[i]->clone();
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

void Character::equip(AMateria* m) {
	if (!m) {
		std::cout << "Character: " << "null Materia cannot be assigned." << std::endl;
		return ;
	}
	if (this->equip_num_ >= MAX_EQUIP) {
		std::cout << "Character: " << "no more Materia cannot be assigned." << std::endl;
		return ;
	}
	std::cout << "Character: " << "Materia assigned in index: "<< this->equip_num_ << "." << std::endl;
	this->equipments_[this->equip_num_] = m;
	this->equip_num_++;
}

// TODO define overloaded function
