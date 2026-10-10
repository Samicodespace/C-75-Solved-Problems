#include <iostream>
using namespace std;
int main() {
    int hour;
    char lazy;
    cout << "Enter Hour (24h format): ";
    cin >> hour;
    cout << "Are you feeling lazy? (Y/N): ";
    cin >> lazy;

    if (hour < 8) {
        if (lazy == 'Y') {
            cout << "Sleep More\n";
        }
        if (lazy != 'Y') {
            cout << "Wake Up\n";
        }
    }

    if (hour >= 8) {
        cout << "Out of Bed\n";
    }
    return 0;
}
