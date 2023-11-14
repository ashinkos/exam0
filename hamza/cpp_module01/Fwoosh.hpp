#ifndef FWOOH_HPP
# define FWOOH_HPP
# include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
	Fwoosh();
	Fwoosh(const std::string &name, const std::string &effetcs);
	Fwoosh(const Fwoosh &a);
	Fwoosh &operator= (const Fwoosh &a);
	virtual ~Fwoosh();

	virtual Fwoosh *clone() const;
};

#endif