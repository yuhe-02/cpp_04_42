#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__


#include "ICharacter.hpp"
#include "AMateria.hpp"
# include <string>
#define MAX_EQUIP 4
class Character : public ICharacter {
	private :
		std::string name_;
		int		  equip_num_;
		AMateria* equipments_[MAX_EQUIP];
		bool	  free_responsible_[MAX_EQUIP];
	public:
		Character();
		~Character();
		Character(std::string const &name);
		Character(const Character& other);
		Character& operator=(const Character &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		// void unequip(int idx);
		// void use(int idx, Character& target);
};
#endif