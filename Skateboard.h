//Created by David Song 10/4/19


#include "Vehicle.h"

class Skateboard : public Vehicle {

private:

public:
    explicit Skateboard(string brand, string model);
    virtual ~Skateboard();
    virtual double mileageEstimate(double time);
    virtual string toString();
};



