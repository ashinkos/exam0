#ifndef DUMMY_HPP
# define DUMMY_HPP
#include "ATarget.hpp"

class Dummy : public ATarget {
	
	public :
	Dummy();
	Dummy(const std::string &type);
	Dummy(const Dummy &d);
	Dummy &operator=(const Dummy &d);
	virtual ~Dummy();
	// virtual Dummy *clone() const;
	Dummy *clone() const;
};

#endif