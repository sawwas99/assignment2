#include "Skateboard.h"
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    	double rand();
	double temp = 0.1 + (rand() % (0.5-0.1 +1));
	double mileage = 3 * time;
	if(time > 25 && time < 250){
		double third = time/3;
		double temp_two = rand() % third;
		mileage += mileage + temp_two;
	}

	return mileage;
}

string Bicycle::toString() {
	string s = "-> Skateboard\n\t";
	return "-> Skateboard\n" + Vehicle::toString();
}

