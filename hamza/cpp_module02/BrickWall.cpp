#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(const std::string &type): ATarget(type) {}

BrickWall::BrickWall(const BrickWall &d): ATarget(d) {}

BrickWall &BrickWall::operator=(const BrickWall &d) {
	if (this != &d){
		this->type = d.type;
	}
	return *this;
}

BrickWall::~BrickWall() {}

BrickWall *BrickWall::clone() const {
	return (new BrickWall(*this));
}