#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
#include "ATarget.hpp"

class BrickWall : public ATarget {
	
	public :
	BrickWall();
	BrickWall(const std::string &type);
	BrickWall(const BrickWall &d);
	BrickWall &operator=(const BrickWall &d);
	virtual ~BrickWall();
	// virtual BrickWall *clone() const;
	BrickWall *clone() const;
};

#endif