#include "Vehicle.h"
#include <string>

class Car : public Vehicle {
public:
	Car();
	Car(const std::string&, const std::string&, Fuel, int, long, Vector3D, Vector3D, Location, Dimension3D, double);
	virtual ~Car();
	std::string getCarInfo();
	void service();
	void turnRadioOn();
	void turnRadiooff();
	void drift();
	void tank();
protected:
	std::string model {"None"};
	std::string color {"None"};
	int mileage {0};
};
