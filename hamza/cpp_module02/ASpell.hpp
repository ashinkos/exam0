#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <iostream>

class ATarget;

class ASpell {
	protected:
	std::string name;
	std::string effects;

	public:
	ASpell();
	ASpell(const std::string &name, const std::string &effetcs);
	ASpell(const ASpell &a);
	ASpell &operator= (const ASpell &a);
	virtual ~ASpell();

	// name getter and setter
	const std::string &getName() const;
	void setName(const std::string &name);

	// effects getter and setter
	const std::string &getEffects() const;
	void setEffects(const std::string &effects);
	
	
	void launch(const ATarget &a) const;
	
	virtual ASpell *clone() const = 0;
};

#endif