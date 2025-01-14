#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

class IMateriaSource {
	protected:
		//
	public:
		IMateriaSource();
		virtual ~IMateriaSource();
		IMateriaSource(const IMateriaSource& other);
		IMateriaSource& operator=(const IMateriaSource &other);
};

#endif