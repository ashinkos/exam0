#include "TargetGenerator.hpp"
#include "Fwoosh.hpp"

TargetGenerator::TargetGenerator(){};

TargetGenerator::~TargetGenerator(){
	for (std::vector<ATarget *>::iterator it = book.begin(); it != book.end(); it++){
		delete (*it);
	}
	book.clear();
}

void TargetGenerator::learnTargetType(ATarget *s){
	if (std::find(book.begin(), book.end(), s) == book.end())
		book.push_back(s->clone());
}

void TargetGenerator::forgetTargetType(const std::string &type){
	for (std::vector<ATarget *>::iterator it = book.begin(); it != book.end(); it++){
		if ((*it)->getType() == type){
			delete (*it);
			book.erase(it);
			return ;
		}
	}
}

ATarget *TargetGenerator::createTarget(const std::string &type){
	for (std::vector<ATarget *>::iterator it = book.begin(); it != book.end(); it++){
		if ((*it)->getType() == type){
			return ((*it)->clone());
		}
	}
	return (NULL);
}
