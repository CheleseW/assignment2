//
// Created by Chelese Washington on 10/4/19.
//

#include "Jet.h"
#include "stdlib.h"
#include "string"

using namespace std;


Jet::Jet(string brand, string model, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setEngineCount(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getEngineCount() {
    return numberOfEngines;
}

void Jet::setEngineCount(int engines) {
    numberOfEngines = engines;
}

double Jet::mileageEstimate(double time) {
    double mileage = rand() % 60 + 40;
    string type = PoweredVehicle::getFuelType();

    if(type.compare("Rocket") == 0 && numberOfEngines > 2)
    {
        mileage += mileage * (numberOfEngines * 0.055);
    }
    return mileage;
}

string Jet::toString() {
    string s = "-> Jet\n\t";
    return "-> Jet\n" + Vehicle::toString() + "\n\tEngines: " +
           to_string(numberOfEngines);
}
