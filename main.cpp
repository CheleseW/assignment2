#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Jet.h"
#include "PoweredVehicle.h"
#include "Skateboard.h"
#include "Yacht.h"

using namespace std;

void printVehiclesRoster(Vehicle **vehicles, int size);
void printVehiclesRoster1(PoweredVehicle **vehicles, int size);

int main() {
    std::cout << "Driving simulator" << std::endl;
    int size = 7;
    int size1 = 4;
    int capacity = 10;
    Vehicle **vehiclesArray = new Vehicle *[capacity];
    PoweredVehicle **pvArray = new PoweredVehicle *[capacity];


    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Skateboard("Santa Cruz", "Screaming Hand Black");
    pvArray[0] = new Jet("Learjet 31", "Model 55", 4);
    pvArray[1] = new Jet("Hawker 400", "400 Beechjet", 4);
    pvArray[2] = new Yacht("Sunseeker", "Predator 62", 3);
    pvArray[3] = new Yacht("Prestige", "460 S", 3);


    pvArray[1]->setFuelType("Rocket");
    pvArray[2]->setFuelType("Commercial");



    printVehiclesRoster(vehiclesArray, size);
    printVehiclesRoster1(pvArray, size1);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }


    if (pvArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size1; i++) {
            delete pvArray[i];
        }
        delete[] pvArray;
    }


    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " minutes" << endl;
    }
}


void printVehiclesRoster1(PoweredVehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " minutes" << endl;
    }
}
