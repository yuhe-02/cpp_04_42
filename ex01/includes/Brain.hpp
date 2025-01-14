#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <string>

#define NEURON 100
class Brain {
	private :
		std::string ideas[NEURON];
	public :
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		void	setIdeas(const int index, const std::string &str);
		const std::string &getIdeas(const int index) const;
		void	showAll( void ) const;
};

#endif