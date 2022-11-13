#include "TrafficParticipant.h"

TrafficParticipant::TrafficParticipant() = default;

TrafficParticipant::TrafficParticipant(Vector3D velocity, Vector3D acceleration, Location location, Dimension3D dimension, double weight) :
	velocity{velocity}, 
	acceleration{acceleration}, 
	PhisicalObject::PhisicalObject(location, dimension, weight) {};

TrafficParticipant::~TrafficParticipant() {

}
