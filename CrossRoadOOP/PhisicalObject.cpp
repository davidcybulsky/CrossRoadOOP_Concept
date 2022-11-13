#include "PhisicalObject.h"

PhisicalObject::PhisicalObject() = default;

PhisicalObject::PhisicalObject(Location location, Dimension3D dimension, double weight) {

	this->location = location;
	this->dimension = dimension;
	this->weight = weight;
}

PhisicalObject::~PhisicalObject() {
	
}

Location PhisicalObject::getLocation() {
	return location;
}

Dimension3D PhisicalObject::getDimension() {
	return dimension;
}
