#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <string>
# include <climits> 

# define DF_HP 10
# define DF_EP 10
# define DF_AD 0
# define DF_NAME "anonymous"
class ClapTrap {
	private :
		std::string name_;
		unsigned int hit_points_;
		unsigned int energy_points_;
		unsigned int attack_damage_;
	public :
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		void attack(const std::string& target = "unknown target");
		void takeDamage(unsigned int amount = 1);
		void beRepaired(unsigned int amount = 1);
		std::string getName( void ) const ;
		unsigned int getHitPoints( void ) const ;
		unsigned int getEnergyPoints( void ) const ;
		unsigned int getAttackDamage( void ) const ;
};
#endif