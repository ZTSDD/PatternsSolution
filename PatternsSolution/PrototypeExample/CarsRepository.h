#pragma once
#include "Car.h"
#include <vector>

class CarsRepository
{
private:
	static CarsRepository carsRepository;
	std::vector<Car*> carPrototypes;
	CarsRepository();
public:
	Car& GetById(int);
	void Add(const Car&);
	int Count();
	static CarsRepository& GetRepository();
};

