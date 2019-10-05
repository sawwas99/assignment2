#include "Skateboard.h"
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    	int rand();
	int temp = (1 + (rand() % (5-1 +1))); //random number from 1-5;
	double num = temp/10;  //divide the value by 10 to get 0.1 to 0.5
	double mileage = num * time;
	if(time > 25 && time < 250){ //if time is between 25, 250
		int third = time/3; 
		int temp_two = rand() % third; //a random value from 1 to 1/3 time is added
		mileage += mileage + temp_two;
	}

	return mileage;
}

string Skateboard::toString() {
	string s = "-> Skateboard\n\t";
	return "->Bicycle\n" + Vehicle::toString();
}

