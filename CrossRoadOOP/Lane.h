#pragma once
#include "PhisicalObject.h"
#include <string>
class Lane : public PhisicalObject {

public:
	Lane();
	Lane(const std::string&, const std::string&, const std::string&, Location, Dimension3D, double);
	virtual ~Lane();
	std::string repair();

protected:
	std::string ID{ "None" }; // Road number, street name etc...
	std::string material{ "None" };
	std::string type{ "None" };


};

