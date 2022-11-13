#pragma once
#include "PhisicalObject.h"
struct Vector3D {
	double x;
	double y;
	double z;
};

class TrafficParticipant : public PhisicalObject {
protected:
	TrafficParticipant(); //= default;
	TrafficParticipant(Vector3D, Vector3D, Location, Dimension3D, double);
	virtual ~TrafficParticipant();
	Vector3D velocity {0,0,0};
	Vector3D acceleration {0,0,0};
public:
	void changeLane();
	void go();
	void stop();
};

