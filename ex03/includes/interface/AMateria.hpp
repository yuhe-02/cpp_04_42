#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__


# include <string>
# include "ICharacter.hpp"

class ICharacter;
class AMateria {
	protected:
		const std::string	type_;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria &other);
		AMateria(std::string const & type);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif