#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include <string>
# include "IMateriaSource.hpp"
// TODO define hpp
#define MAX_MATERIAL 4
class MateriaSource: public IMateriaSource {
	private:
		AMateria* equipments_[MAX_MATERIAL];
		bool	  free_responsible_[MAX_MATERIAL];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource &other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif