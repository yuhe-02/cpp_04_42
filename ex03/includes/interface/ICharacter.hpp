#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__

# include <string>
class ICharacter {
	protected:
		//
	public:
		ICharacter();
		virtual ~ICharacter();
		ICharacter(const ICharacter& other);
		ICharacter& operator=(const ICharacter &other);
};

#endif