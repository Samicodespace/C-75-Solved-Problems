#include <iostream>

using namespace std;

int main() {
    int pin;
    char face;
   cout << "Enter Secure PIN: ";
    cin >> pin;

    if (pin == 1234) {
        cout << "PIN Verified\n";
        cout << "Is Face Recognized? (Y/N): ";
        cin >> face;

        if (face == 'Y') {
            cout << "Access Granted\n";
        }
        if (face != 'Y') {
            cout << "Face Failed\n";
        }
    }
    if (pin != 1234) {
        cout << "Wrong PIN\n";
    }

    return 0;
}
