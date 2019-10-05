//Created by David Song on 10/4/19


#include "Jet.h"
#include <cstdlib>
#include <string>

Jet::Jet() {	
	numberOfEngines = 1; //default one engine
	setBrand("Custom");
	setModel("Boeing 380");  //base model
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
	int num = stoi(engineCount);  //convert string to int
	numberOfEngines = num;
}

double Jet::mileageEstimate(double time){
	int rand();
	int temp = 40 + (rand() % (100-40 + 1)); //random number from 40-100
	double mileage = temp * time;
	if( (numberOfEngines > 2) && (fuelType == "Rocket")) //if engines > 3 and fueltype = Rocket
			mileage += mileage * (numberOfEngines* 0.055); //multiply by 5.5% per a engine
	return mileage;

}

string Jet::toString() {
	string s = "-> Jet\n\t";
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Count:" +
		to_string(numberOfEngines);

}
