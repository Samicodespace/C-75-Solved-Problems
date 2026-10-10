#include <iostream>
using namespace std;
int main() {
    char air;
    cout << "--- Smart Fan Regulator ---\n";
    cout << "Enter Air Feel (H: Hot, M: Mild, C: Cold, S: Storm): ";
    cin >> air;
    switch (air) {
        case 'H':
        case 'h':
            cout << "Speed: Level 5 Max\n";
            cout << "Power: Full Flow\n";
            break;
        case 'M':
        case 'm':
            cout << "Speed: Level 3 Normal\n";
            cout << "Power: Eco Mode\n";
            break;
        case 'C':
        case 'c':
            cout << "Speed: Level 1 Low\n";
            cout << "Power: Minimum Flow\n";
            break;
        case 'S':
        case 's':
            cout << "Speed: Level 0 OFF\n";
            cout << "Status: Safety Shutdown\n";
            break;
        default:
            cout << "Invalid Signal Code!\n";
    }

    return 0;
}
