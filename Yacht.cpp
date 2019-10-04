//
// Created by Chelese Washington on 10/4/19.
//

#include "Yacht.h"
#include "stdlib.h"
#include "string"

using namespace std;


Yacht::Yacht(string brand, string model, int throttleSetting) {
    setBrand(brand);
    setModel(model);
    setThrottle(throttleSetting);
}

Yacht::~Yacht() = default;

int Yacht::getThrottle() {
    return myThrottle;
}

void Yacht::setThrottle(int throttle) {
    myThrottle = throttle;
}

double Yacht::mileageEstimate(double time) {
    double mileage = rand() % 60 + 40;

    string fuel = getFuelType();

    if(myThrottle >= 2)
    {
        mileage += mileage * (myThrottle * 0.2);
        //Each notch forward on the throttle increases speed by 20 percent
    }

    if(fuel.compare("Commercial") == 0){
        mileage += mileage * (myThrottle * 0.1);
        //Each notch forward on the throttle increases speed by another 10 percent
        // for commercial fuel
    }
    return mileage;
}

string Yacht::toString() {
    string s = "-> Yacht\n\t";
    return "-> Yacht\n" + Vehicle::toString() + "\n\tThrottle: " +
           to_string(myThrottle);
}
