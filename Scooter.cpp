#include "Scooter.h"
#include <cstdlib>

Scooter::Scooter(string brand, string model, string fuelType) {
        setBrand(brand);
        setModel(model);
	setFuelType(fuelType);
}

Scooter::~Scooter() = default;

double Scooter::mileageEstimate(double time) {
        int rand();
        int temp = (15 + (rand() % (50-15 +1))); //chose a random number between 15-50
        double mileage = temp * time;
	if(time > 120){ 	 //if travels for time > 120, lower mileage by time/4
               	int num = time/4;
		mileage += mileage - num;
    	 }

        return mileage;
}

string Scooter::toString() {
        string s = "-> Scooter\n\t";
        return "->Scooter\n" + Vehicle::toString();
}


