#include "TrafficParticipant.h"

enum Fuel {
    gasolin,
    diesel,
    gas,
    electrical_energy,
    hybrid
};

class Vehicle : public TrafficParticipant /* With engine */ {

protected:

    Vehicle();// = default;
    Vehicle(Fuel, long, Vector3D, Vector3D, Location, Dimension3D, double);
    virtual ~Vehicle();
    long VehicleID {1234567890};
    Fuel fuel;
public:
    void turnOn();
    void turnOff();
    void turnLeft();
    void turnRight();
    void goBack();

};