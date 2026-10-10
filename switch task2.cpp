#include <iostream>
using namespace std;
int main() {
    char stage;
    cout << "--- Rocket Launch Sequence ---\n";
    cout << "Enter Current Stage (G: Green, Y: Yellow, R: Red): ";
    cin >> stage;

    switch (stage) {
        case 'G':
        case 'g':
            cout << "Engines Safe\n";
            cout << "Launch Confirmed\n";
            break;
        case 'Y':
        case 'y':
            cout << "Hold Countdown\n";
            cout << "Checking Systems\n";
            break;
        case 'R':
        case 'r':
            cout << "stop\n";
            cout << "Emptying Fuel Tank\n";
            break;
        default:
            cout << "Invalid \n";
            cout << "system blocked \n";
    }

    return 0;
}
