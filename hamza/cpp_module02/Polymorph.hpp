#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
# include "ASpell.hpp"

class Polymorph : public ASpell {
	public:
	Polymorph();
	Polymorph(const std::string &name, const std::string &effetcs);
	Polymorph(const Polymorph &a);
	Polymorph &operator= (const Polymorph &a);
	virtual ~Polymorph();

	virtual Polymorph *clone() const;
};

#endif