//
// Created by Chelese Washington on 10/4/19.
//

#include "Skateboard.h"
#include "stdlib.h"
#include "string"

using namespace std;


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;



double Skateboard::mileageEstimate(double time) {
    double mileage = (rand() % 5 + 1) / 10.0;
    double add;
    if(time > 25 && time < 250){
      add = ( rand() % static_cast<int>(time / 3) ) + 1;
    }
    mileage += add;
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
