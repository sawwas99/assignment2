//Created by David Song on 10/4/19


#include "Jet.h"
#include <cstdlib>


Jet:Jet() {	
	numberOfEngines = 1;
	setBrand("Custom");
	setModel("Boeing 380");
}

Jet::Jet(string brand, string model, string fuelType, int engineCount) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngines(engineCount);
}

Jet::~Jet()= default;

int Jet::getEngineCount(){
	return engineCount;
}

void Jet::setEngineCount(int engineCount){
	numberOfEngines = engineCount;
}

double Jet::mileageEstimate(double time){
	int rand();
	int temp = 40 + (rand() % (100-40 + 1));
	double mileage = temp * time;
	if(engineCount > 2 && fuelType = "Rocket")
		mileage += mileage * (myEngineCount* 0.055);
	return mileage;

}

string Jet::toString() {
	string s = "-> Jet\n\t";
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Count:" +
		to_string(numberOfEngines);

}
