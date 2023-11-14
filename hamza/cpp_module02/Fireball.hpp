#ifndef FIREBALL_HPP
# define FIREBALL_HPP
# include "ASpell.hpp"

class Fireball : public ASpell {
	public:
	Fireball();
	Fireball(const std::string &name, const std::string &effetcs);
	Fireball(const Fireball &a);
	Fireball &operator= (const Fireball &a);
	virtual ~Fireball();

	virtual Fireball *clone() const;
};

#endif