#pragma once
#include "PhisicalObject.h"
class TrafficLight : public PhisicalObject {
private:
	bool isGreen {false};
public:
	TrafficLight();
	TrafficLight(bool, Location, Dimension3D, double);
	virtual ~TrafficLight();
	bool canGo();
	void changeColor();
};

