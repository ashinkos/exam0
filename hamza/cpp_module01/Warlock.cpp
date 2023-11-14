#include "Warlock.hpp"
#include <algorithm>

Warlock::Warlock(const std::string &name, const std::string &title){
	this->name = name;
	this->title = title;
	std::cout << name << ": This looks like another boring day." << std::endl;
};

Warlock::~Warlock(){
	std::cout << name << ": My job here is done!" << std::endl;
};	
	
const std::string &Warlock::getName() const{ return name;};
	
const std::string &Warlock::getTitle() const{ return title;};

void Warlock::setTitle(const std::string &title){ this->title = title;};

void Warlock::introduce() const{
		std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
};

void Warlock::learnSpell(ASpell *s){
	if (std::find(knowenSpell.begin(), knowenSpell.end(), s) == knowenSpell.end())
		knowenSpell.push_back(s);
}

void Warlock::forgetSpell(std::string spellName){
	for (std::vector<ASpell *>::iterator it = knowenSpell.begin(); it != knowenSpell.end(); it++){
		if ((*it)->getName() == spellName){
			knowenSpell.erase(it);
			return ;
		}
	}
}

void Warlock::launchSpell(std::string spellName, const ATarget &t){
	for (std::vector<ASpell *>::iterator it = knowenSpell.begin(); it != knowenSpell.end(); it++){
		if ((*it)->getName() == spellName){
			(*it)->launch(t);
			return ;
		}
	}
}

