//Created by David Song on 10/4/19


#include "Jet.h"
#include <cstdlib>
#include <string>

Jet::Jet() {	
	numberOfEngines = 1;
	setBrand("Custom");
	setModel("Boeing 380");
}

Jet::Jet(string brand, string model, string fuelType, string engineCount) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineCount(engineCount);
}

Jet::~Jet()= default;

int Jet::getEngineCount(){
	return numberOfEngines;
}

void Jet::setEngineCount(string engineCount){
	int num = stoi(engineCount);
	numberOfEngines = num;
}

double Jet::mileageEstimate(double time){
	int rand();
	int temp = 40 + (rand() % (100-40 + 1));
	double mileage = temp * time;
	if( (numberOfEngines > 2) && (fuelType == "Rocket"))
			mileage += mileage * (numberOfEngines* 0.055);
	return mileage;

}

string Jet::toString() {
	string s = "-> Jet\n\t";
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Count:" +
		to_string(numberOfEngines);

}
