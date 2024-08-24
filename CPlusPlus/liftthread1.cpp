#include <iostream>
#include <thread>   // For sleep_for
#include <chrono>   // For seconds

using namespace std;

// Function to simulate the elevator moving
void moveElevator(int currentFloor, int destinationFloor) {
    if (currentFloor < destinationFloor) {
        for (int i = currentFloor; i <= destinationFloor; ++i) {
            cout << "Lift is at floor: " << i << endl;
            this_thread::sleep_for(chrono::seconds(1));  // Simulate the time to move to the next floor
        }
    } else if (currentFloor > destinationFloor) {
        for (int i = currentFloor; i >= destinationFloor; --i) {
            cout << "Lift is at floor: " << i << endl;
            this_thread::sleep_for(chrono::seconds(1));  // Simulate the time to move to the next floor
        }
    } else {
        cout << "Lift is already at the requested floor: " << destinationFloor << endl;
    }
}

int main() {
    int currentFloor = 0;  // Assuming the lift starts at ground floor (0)
    int destinationFloor;

    cout << "Enter the floor you want to go to (0-9): ";
    cin >> destinationFloor;

    if (destinationFloor < 0 || destinationFloor > 9) {
        cout << "Invalid floor. Please enter a floor between 0 and 9." << endl;
    } else {
        moveElevator(currentFloor, destinationFloor);
    }

    cout << "Lift has arrived at floor: " << destinationFloor << endl;

    return 0;
}

