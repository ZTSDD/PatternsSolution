#pragma once
#include "Color24.h"
#include <string>

class Car
{
public:
	int horsePower;
	int torque;
	float engineVolume;
	int maxSpeed;
	int gears;
	bool automatic;
	Color24 color;
	std::string brand;
	std::string model;
};