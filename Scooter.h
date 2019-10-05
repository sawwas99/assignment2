//Created by David Song 10/4/19


#include "PoweredVehicle.h"

class Scooter : public PoweredVehicle {

private:

public:
    explicit Scooter(string brand, string model, string fuelType);
    virtual ~Scooter();
    virtual double mileageEstimate(double time);
    virtual string toString();
};




