#pragma once
#include <string>
class LegalSystem
{
protected:
	LegalSystem();
	LegalSystem(const std::string&);
	virtual ~LegalSystem();
	std::string country {"None"};
public:
};

