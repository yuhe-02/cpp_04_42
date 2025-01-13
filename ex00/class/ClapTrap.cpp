#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name_(DF_NAME), hit_points_(DF_HP), energy_points_(DF_EP), attack_damage_(DF_AD) {
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string name): name_(name), hit_points_(DF_HP), energy_points_(DF_EP), attack_damage_(DF_AD) {
    std::cout << "ClapTrap Constructor with name argument called" << std::endl;
}
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name_ << " Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name_(other.getName()), hit_points_(other.getHitPoints()), 
    energy_points_(other.getEnergyPoints()), attack_damage_(other.getAttackDamage()) {
    std::cout << "ClapTrap Copy constructor called" << std::endl;
} 

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->name_ = other.getName();
        this->hit_points_ = other.getHitPoints();
        this->energy_points_ = other.getEnergyPoints();
        this->attack_damage_ = other.getAttackDamage();
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (this->energy_points_ <= 0 || this->hit_points_ <= 0) {
        std::cout << "ClapTrap " << this->name_ << " fails to attack." << std::endl;
        return ;
    }
	std::cout << "ClapTrap " << this->name_ << " attacks " << target
          << ", causing " << this->attack_damage_ << " points of damage!"
          << std::endl;
    this->energy_points_--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hit_points_ <= 0) {
        std::cout << "ClapTrap " << this->name_ << " is about to die." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name_ << " takes " << amount 
          << " points of damage!" << std::endl;
    if (this->hit_points_ < amount) {
        this->hit_points_ = 0;
    } else {
        this->hit_points_ -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (this->energy_points_ <= 0) {
        std::cout << "ClapTrap " << this->name_ << " fails to be repaired. Wait for die!" << std::endl;
        return ;
    }
    if (this->hit_points_ >= UINT_MAX - amount) {
        amount = UINT_MAX - this->hit_points_;
    }
	std::cout << "ClapTrap " << this->name_ << " is repaired by " << amount
                  << " points." << std::endl;
    this->hit_points_ += amount;
    this->energy_points_--;
}


std::string ClapTrap::getName( void ) const {
    return (this->name_);
}
unsigned int ClapTrap::getHitPoints( void ) const {
    return (this->hit_points_);
}
unsigned int ClapTrap::getEnergyPoints( void ) const {
    return (this->energy_points_);
}
unsigned int ClapTrap::getAttackDamage( void ) const {
    return (this->attack_damage_);
}