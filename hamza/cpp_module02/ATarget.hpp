#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <iostream>
# include "ASpell.hpp"

	class ATarget {
		protected:
		std::string type;

		public:
		ATarget();
		ATarget(const std::string &type);
		ATarget(const ATarget &t);
		ATarget &operator=(const ATarget &t);

		virtual ~ATarget();
		const std::string &getType() const;
		void setType(const std::string &type);

		void getHitBySpell(const ASpell &a) const;

		virtual ATarget *clone() const = 0;
	};

#endif