#include<stdlib.h>
#include <iostream>
#include "Person.h"
#include "Car.h"
#include "TrafficSign.h"
#include "TrafficLight.h"
#include "Article.h"
#include "Lane.h"

std::string boolParse(bool b) {
	return b == true ? "true" : "false";
}

int main() {
	Location loc{ 1,1,1 };
	Dimension3D dim{ 170,90,100 };
	Vector3D velo{ 1,1,1 };
	Vector3D acc{ 0,0,0 };
	Person* p1 = new Person("Dawid", "Cybulski", 987632100L, velo, acc, loc, dim, 100);
	std::cout << p1->getFullname() << std::endl;
	Location location = p1->getLocation();
	std::cout << location.x << " " << location.y << " " << location.z << std::endl;
	Dimension3D dimension = p1->getDimension();
	std::cout << dimension.x << " " << dimension.y << " " << dimension.z << std::endl;
	Location loc1{ 100,100,100 };
	Dimension3D dim1{ 320,200,150 };
	Vector3D velo1{ 100,0,0 };
	Vector3D acc1{ 10,0,0 };
	Car* c1 = new Car("BMW", "Black", diesel, 10000, 498204324L, velo1, acc1, loc1, dim1, 1260);
	std::cout << "Car info: " << c1->getCarInfo() << std::endl;
	Location loc2{ 10,100,10 };
	Dimension3D dim2{ 1,2,1 };
	TrafficSign* s1 = new TrafficSign("B-20","STOP","red",loc2,dim2,10);
	std::cout << s1->signInfo();
	TrafficLight* l1 = new TrafficLight();
	std::cout << boolParse(l1->canGo()) << std::endl;
	l1->changeColor();
	std::cout << boolParse(l1->canGo()) << std::endl;
	Lane* lane = new Lane("DW-703", "asfalt", "highway", { 99,100,122 }, { 2000,6,0.1 }, 100000);
	std::cout << lane->repair() << std::endl;
	Article* art14 = new Article("Art.14.", "Zabrania siê wyprzedzania przed przejœciem dla pieszych.",
		true, "Kodeks drogowy", "01.10.2022", "Ustawa", "Polska");
	std::cout << boolParse(art14->isActual()) << std::endl;

	delete p1;
	delete c1;
	delete s1;
	delete l1;
	delete lane;
	delete art14;

	return 0;
}