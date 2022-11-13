#pragma once
#include <iostream>
#include "TrafficParticipant.h"
#include <string>
class Person : public TrafficParticipant {
protected:
	std::string surname{ "None" };
	std::string name{ "None" };
private:
	long personalID = {123123123};
public:
	Person(); // = default;
	Person(const std::string& surname, const std::string& name, long, Vector3D, Vector3D, Location, Dimension3D, double);
	virtual ~Person();
	void tellYourName();
	void go();
	void stop();
	const std::string getFullname();
	using PhisicalObject::getLocation;
};

int main();
