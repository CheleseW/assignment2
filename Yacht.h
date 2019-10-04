//
// Created by Chelese Washington on 10/4/2019.
//

#ifndef DRIVINGSIMULATOR_YACHT_H
#define DRIVINGSIMULATOR_YACHT_H

#include "PoweredVehicle.h"

class Yacht : public PoweredVehicle {

private:

public:
    explicit Yacht(string brand, string model, int gearCount = 1);

    virtual ~Yacht();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_YACHT_H
