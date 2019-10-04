//Created by David Song on 10/4/19
//

#include "PoweredVehicle.h"

class Jet: public PoweredVehicle {

private:
	int numberOfEngines;

public:
	Jet();
	explicit Jet(string brand, string model, string fuelType, int engineCount);
	virtual ~Jet();
	int getEngineCount();
	void setEngineCount(int engineCount);
	virtual double mileagueEstimate(double time);

	virtual string toString();
};

