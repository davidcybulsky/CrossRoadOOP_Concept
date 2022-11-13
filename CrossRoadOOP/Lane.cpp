#include "Lane.h"

Lane::Lane() = default;

Lane::Lane(const std::string& ID, const std::string& material, const std::string& type, 
	Location location, Dimension3D dimension, double weight) :
	ID{ ID }, material{ material }, type{ type }, PhisicalObject::PhisicalObject(location, dimension, weight) {};

Lane::~Lane() {

};

std::string Lane::repair() {
	return "Repair in progress\n";
}