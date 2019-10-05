//Created by David Song on 10/4/19
//

#include "PoweredVehicle.h"

class Jet: public PoweredVehicle {

private:
	int numberOfEngines;

public:
	Jet();
	explicit Jet(string brand, string model, string fuelType, string engineCount);
	virtual ~Jet();
	int getEngineCount();
	void setEngineCount(string engineCount);
	virtual double mileageEstimate(double time);

	virtual string toString();
};

