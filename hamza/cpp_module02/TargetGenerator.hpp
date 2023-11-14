#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include "ATarget.hpp"
#include <vector>

class TargetGenerator {
	private:
		std::vector<ATarget *> book;
		TargetGenerator(const TargetGenerator &b);
		TargetGenerator &operator=(const TargetGenerator &d);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *s);
		void forgetTargetType(const std::string &type);
		ATarget *createTarget(const std::string &type);
};
#endif
