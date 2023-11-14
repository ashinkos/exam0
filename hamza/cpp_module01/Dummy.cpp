#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy") {}

Dummy::Dummy(const std::string &type): ATarget(type) {}

Dummy::Dummy(const Dummy &d): ATarget(d) {}

Dummy &Dummy::operator=(const Dummy &d) {
	if (this != &d){
		this->type = d.type;
	}
	return *this;
}

Dummy::~Dummy() {}

// Dummy *Dummy::clone() const {
// 	return (new Dummy(*this));
// }

Dummy *Dummy::clone() const {
	return (new Dummy(*this));
}