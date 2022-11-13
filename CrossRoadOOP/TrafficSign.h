
#include "PhisicalObject.h"
#include <string>
class TrafficSign : public PhisicalObject {

public:
	TrafficSign();
	TrafficSign(const std::string&, const std::string&, const std::string&, Location, Dimension3D, double);
	virtual ~TrafficSign();
	std::string signInfo();
protected:
	std::string code {"None"};
	std::string name {"None"};
	std::string mainColor {"None"};
};

