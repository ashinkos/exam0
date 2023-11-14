#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(const std::string &name, const std::string &effects) : ASpell(name, effects) {}

Polymorph::Polymorph(const Polymorph &a) : ASpell(a) {}

Polymorph &Polymorph::operator= (const Polymorph &a) {
	if (this != &a) {
		this->name = a.name;
		this->effects = a.effects;
	}
	return (*this);
}

Polymorph::~Polymorph() {}

Polymorph *Polymorph::clone() const {
	return (new Polymorph(*this));
}