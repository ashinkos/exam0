#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {}

ATarget::ATarget(const std::string &type) : type(type) {}

ATarget::ATarget(const ATarget &t) {
	if (this != &t) {
		this->type = t.type;
	}
}

ATarget &ATarget::operator= (const ATarget &t) {
	if (this != &t) {
		this->type = t.type;
	}
	return *this;
}

ATarget::~ATarget() {}


const std::string &ATarget::getType() const {
	return this->type;
}

void ATarget::setType(const std::string &type) {
	this->type = type;
}

void ATarget::getHitBySpell(const ASpell &a) const{
	std::cout << this->type << " has been " << a.getEffects() << "!" << std::endl;
}

