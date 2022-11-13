#include "TrafficLight.h"

TrafficLight::TrafficLight() = default;

TrafficLight::TrafficLight(bool isGreen, Location location, Dimension3D dimension, double weight) :
	isGreen{ isGreen }, PhisicalObject::PhisicalObject(location, dimension, weight) {};

TrafficLight::~TrafficLight() {};

bool TrafficLight::canGo() {
	return TrafficLight::isGreen;
}

void TrafficLight::changeColor() {
	TrafficLight::isGreen = !(TrafficLight::isGreen);
}