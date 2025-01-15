#include "Character.hpp"
#include <iostream>

Character::Character(): ICharacter(), name_("anonymous"), equip_num_(0) {
	for (int i = 0; i < MAX_EQUIP;i++) {
        this->equipments_[i] = 0;
    }
	std::cout << "Character: " << "Default Constructor called." << std::endl;
}
Character::Character(std::string const &name): ICharacter(), name_(name), equip_num_(0) {
	for (int i = 0; i < MAX_EQUIP;i++) {
        this->equipments_[i] = 0;
    }
	std::cout << "Character: " << "Constructor with name called." << std::endl;
}

Character::Character(const Character &other): ICharacter(other), name_(other.name_), equip_num_(other.equip_num_) {
	for (int i = 0; i < MAX_EQUIP;i++) {
		this->equipments_[i] = 0;
		if (i < other.equip_num_) {
			this->equipments_[i] = other.equipments_[i]->clone();
		}
    }
	std::cout << "Character: " << "Copy Constructor called." << std::endl;
}

Character::~Character() {
	for (int i = 0; i < this->equip_num_; i++) {
        delete equipments_[i];
    }
	std::cout << "Character: " << "Destructor called." << std::endl;
}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		ICharacter::operator=(other);
		this->name_ = other.name_;
		this->equip_num_ = other.equip_num_;
		for (int i = 0; i < MAX_EQUIP;i++) {
			this->equipments_[i] = 0;
			if (i < other.equip_num_) {
				this->equipments_[i] = other.equipments_[i]->clone();
			}
		}
	}
	std::cout << "Character: " << "Copy assignment operator called." << std::endl;
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name_);
}
