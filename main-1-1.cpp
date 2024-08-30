#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    std::cout << "How many vehicles?" << std::endl;
    int num = 0;
    std::cin >> num;
    int buffer = 0;
    Vehicle * arr[num];
    for (int i = 0; i < num; i++) {
        std::cout << "What type of vehicle? 0 is car, 1 bus, 2 motorbike: " << std::endl;
        std::cin >> buffer;
        if (buffer == 0) {
            arr[i] = new Car(i);
        } else if (buffer == 1) {
            arr[i] = new Bus(i);
        } else if (buffer == 2) {
            arr[i] = new Motorbike(i);
        }
    }

    for (int i = 0; i < num; i++) {
        std::cout << arr[i]->getParkingDuration() << std::endl;
    } 
}