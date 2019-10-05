#include "Skateboard.h"
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    	int rand();
	int temp = (1 + (rand() % (5-1 +1)));
	double num = temp/10;
	double mileage = num * time;
	if(time > 25 && time < 250){
		int third = time/3;
		int temp_two = rand() % third;
		mileage += mileage + temp_two;
	}

	return mileage;
}

string Skateboard::toString() {
	string s = "-> Skateboard\n\t";
	return "->Bicycle\n" + Vehicle::toString();
}

