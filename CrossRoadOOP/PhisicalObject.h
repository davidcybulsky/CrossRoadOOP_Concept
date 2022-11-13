#pragma once
struct Location {
	double x;
	double y;
	double z;
};

struct Dimension3D {
	double x;
	double y;
	double z;
};

class PhisicalObject {
protected:
	PhisicalObject();// = default;
	PhisicalObject(Location, Dimension3D, double);
	virtual ~PhisicalObject();

	Location location {0,0,0};
	Dimension3D dimension {0,0,0};
	double weight {0};
	
	Location getLocation();
public:	
	void changeLocation(Location);
	void changeDimension(Dimension3D);
	virtual Dimension3D getDimension();

};