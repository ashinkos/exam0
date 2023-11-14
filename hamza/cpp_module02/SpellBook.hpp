#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <vector>

class SpellBook {
	private:
		std::vector<ASpell *> book;
		SpellBook(const SpellBook &b);
		SpellBook &operator=(const SpellBook &d);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell *s);
		void forgetSpell(const std::string &spellName);
		ASpell *createSpell(const std::string &spellName);
};
#endif