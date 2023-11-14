#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(const std::string &name, const std::string &effects) : ASpell(name, effects) {}

Fireball::Fireball(const Fireball &a) : ASpell(a) {}

Fireball &Fireball::operator= (const Fireball &a) {
	if (this != &a) {
		this->name = a.name;
		this->effects = a.effects;
	}
	return (*this);
}

Fireball::~Fireball() {}

Fireball *Fireball::clone() const {
	return (new Fireball(*this));
}