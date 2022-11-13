#include "Car.h"
#include <string>
Car::Car() = default;

Car::Car(const std::string& mod, const std::string& col, Fuel fuel, int miles, long id, Vector3D v, Vector3D a, Location l, Dimension3D d, double w) :
	model{ mod }, color{ col }, mileage{ miles },
	Vehicle::Vehicle(fuel, id, v, a, l, d, w) {}

Car::~Car() {};

std::string Car::getCarInfo() {
	return Car::color + " " + Car::model;
};