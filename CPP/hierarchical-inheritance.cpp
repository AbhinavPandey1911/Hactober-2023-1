#include <iostream>
using namespace std;

// Base class
class Engine {
protected:
    int engineCapacity;

public:
    Engine(int capacity) : engineCapacity(capacity) {}

    void start() {
        cout << "Engine started with " << engineCapacity << " CC." << endl;
    }
};

// Derived class 1
class PetrolEngine : public Engine {
public:
    PetrolEngine(int capacity) : Engine(capacity) {}

    void runOnPetrol() {
        cout << "Running on Petrol." << endl;
    }
};

// Derived class 2
class DieselEngine : public Engine {
public:
    DieselEngine(int capacity) : Engine(capacity) {}

    void runOnDiesel() {
        cout << "Running on Diesel." << endl;
    }
};

// Derived class 3
class Car {
public:
    void drive() {
        cout << "Driving the car." << endl;
    }
};

int main() {
    // Create objects of derived classes
    PetrolEngine petrolEngine(1500);
    DieselEngine dieselEngine(2000);
    Car car;

    // Accessing the members of the base and derived classes
    petrolEngine.start();
    petrolEngine.runOnPetrol();

    dieselEngine.start();
    dieselEngine.runOnDiesel();

    car.drive();

    return 0;
}
