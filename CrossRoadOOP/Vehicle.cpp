#include "Vehicle.h"

Vehicle::Vehicle() = default;
Vehicle::Vehicle(Fuel fuel, long ID, Vector3D velo, Vector3D acc, Location location, Dimension3D dimension, double weight) :
	fuel{ fuel }, VehicleID{ ID },
	TrafficParticipant::TrafficParticipant(velo, acc, location, dimension, weight) {};
Vehicle::~Vehicle() {};

