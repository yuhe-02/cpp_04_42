#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__

# include <string>
# include "AMateria.hpp"
class AMateria;
// TODO refresh commentout regarding pure virtual function
class ICharacter {
	public:
		ICharacter();
		virtual ~ICharacter();
		ICharacter(const ICharacter& other);
		ICharacter& operator=(const ICharacter &other);
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif