#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {}
ASpell::ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects) {}
ASpell::ASpell(const ASpell &a) {
	if (this != &a) {
		this->name = a.name;
		this->effects = a.effects;
	}
}

ASpell &ASpell::operator= (const ASpell &a) {
	if (this != &a) {
		this->name = a.name;
		this->effects = a.effects;
	}
	return *this;
}

ASpell::~ASpell() {}

const std::string &ASpell::getName() const {
	return this->name;
}

void ASpell::setName(const std::string &name) {
	this->name = name;
}

const std::string &ASpell::getEffects() const {
	return this->effects;
}

void ASpell::setEffects(const std::string &effects) {
	this->effects = effects;
}

void ASpell::launch(const ATarget &a) const {
	a.getHitBySpell(*this);
}