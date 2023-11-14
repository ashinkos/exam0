#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
// * void introduce() const;

// It must display:

// <NAME>: I am <NAME>, <TITLE>!

class Warlock {
	std::string name;
	std::string title;
	std::vector<ASpell *> knowenSpell;

	public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock();	
	const std::string &getName() const;
	const std::string &getTitle() const;

	void setTitle(const std::string &title);

	void introduce() const;
	void learnSpell(ASpell *s);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, const ATarget &t);
};

#endif