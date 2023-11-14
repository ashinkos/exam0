#include "SpellBook.hpp"
#include "Fwoosh.hpp"

SpellBook::SpellBook(){};

SpellBook::~SpellBook(){
	for (std::vector<ASpell *>::iterator it = book.begin(); it != book.end(); it++){
		delete (*it);
	}
	book.clear();
}

void SpellBook::learnSpell(ASpell *s){
	if (std::find(book.begin(), book.end(), s) == book.end())
		book.push_back(s->clone());
}

void SpellBook::forgetSpell(const std::string &spellName){
	for (std::vector<ASpell *>::iterator it = book.begin(); it != book.end(); it++){
		if ((*it)->getName() == spellName){
			delete (*it);
			book.erase(it);
			return ;
		}
	}
}

ASpell *SpellBook::createSpell(const std::string &spellName){
	for (std::vector<ASpell *>::iterator it = book.begin(); it != book.end(); it++){
		if ((*it)->getName() == spellName){
			return ((*it)->clone());
		}
	}
	return (NULL);
}
