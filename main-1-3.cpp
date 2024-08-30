#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"

int main() {
  int buffer = 0;
  ParkingLot lot(10);
  std::cout << "What type of vehicle? 0 is car, 1 bus, 2 motorbike: "
            << std::endl;
  std::cin >> buffer;
  for (int i = 0; i < 11; i++) {
    std::cout << "What type of vehicle? 0 is car, 1 bus, 2 motorbike: "
              << std::endl;
    std::cin >> buffer;
    if (buffer == 0) {
      lot.parkVehicle(new Car(i));
    } else if (buffer == 1) {
      lot.parkVehicle(new Bus(i));
    } else if (buffer == 2) {
      lot.parkVehicle(new Motorbike(i));
    }
  }

  std::cout << "There are " << lot.countOverstayingVehicles(15) << " overstaying vehicles." << std::endl;
}