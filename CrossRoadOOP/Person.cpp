#include "Person.h"

Person::Person() = default;

Person::Person(const std::string& surname, const std::string& name, long ID,
	Vector3D velocity, Vector3D acceleration, Location location, Dimension3D dimension, double weight) :
	surname{ surname },
	name{ name },
	personalID{ ID },
	TrafficParticipant::TrafficParticipant(velocity, acceleration, location, dimension, weight) {};

Person::~Person() {};

const std::string Person::getFullname() {
	return surname + " " + name;
};
