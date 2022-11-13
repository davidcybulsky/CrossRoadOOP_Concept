#include "TrafficSign.h"

TrafficSign::TrafficSign() = default;

TrafficSign::TrafficSign(const std::string& code, const std::string& name,
	const std::string& mainColor, Location location, Dimension3D dimension, double weight) :
	code{code}, name{name}, mainColor {mainColor},
	PhisicalObject::PhisicalObject(location, dimension, weight) {};

TrafficSign::~TrafficSign() {

};

std::string TrafficSign::signInfo() {
	return "Code: " + TrafficSign::code + "\nName: " + TrafficSign::name + " \n";
}
