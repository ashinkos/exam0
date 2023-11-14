#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(const std::string &name, const std::string &effects) : ASpell(name, effects) {}

Fwoosh::Fwoosh(const Fwoosh &a) : ASpell(a) {}

Fwoosh &Fwoosh::operator= (const Fwoosh &a) {
	if (this != &a) {
		this->name = a.name;
		this->effects = a.effects;
	}
	return (*this);
}

Fwoosh::~Fwoosh() {}

Fwoosh *Fwoosh::clone() const {
	return (new Fwoosh(*this));
}