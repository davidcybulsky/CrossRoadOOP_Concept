#pragma once
#include "LegalSystem.h"

class Document : public LegalSystem {
public:
	bool isActual();
protected:
	Document();
	Document( bool, const std::string&, const std::string&, const std::string&, const std::string&);
	virtual ~Document();
	std::string nameOfAct = { "None" };
	std::string date = { "None" };
	std::string typeOfAct = { "None" };
	bool actual {false};
};