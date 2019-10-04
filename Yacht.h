//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_YACHT_H
#define DRIVINGSIMULATOR_YACHT_H

#include "Vehicle.h"

class Yacht : public Vehicle {

private:

public:
    explicit Yacht(string brand, string model, int gearCount = 1);

    virtual ~Yacht();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_YACHT_H
