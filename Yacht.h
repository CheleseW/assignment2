//
// Created by Chelese Washington on 10/4/2019.
//

#ifndef DRIVINGSIMULATOR_YACHT_H
#define DRIVINGSIMULATOR_YACHT_H

#include "PoweredVehicle.h"

class Yacht : public PoweredVehicle {

private:
  int myThrottle;
  //Each notch forward on the throttle increases speed by 20 percent
  //Each notch forward on the throttle increases speed by another 10 percent
  // for commercial fuel

public:
    explicit Yacht(string brand, string model, int throttleSetting = 1);

    virtual ~Yacht();
    int getThrottle();
    void setThrottle(int gearCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_YACHT_H
