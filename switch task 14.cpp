#include <iostream>
using namespace std;
int main() {
    int choice;

    cout << "1: Maths  2: English  3: Urdu  4: Computer\n";
    cout << "Select Subject (1-4): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Subject: Maths\n";
            cout << "Study Time: 2 Hours\n";
            break;

        case 2:
            cout << "Subject: English\n";
            cout << "Study Time: 1 Hour\n";
            break;

        case 3:
            cout << "Subject: Urdu\n";
            cout << "Study Time: 45 Minutes\n";
            break;

        case 4:
            cout << "Subject: Computer\n";
            cout << "Study Time: 1.5 Hours\n";
            break;

        default:
            cout << "Invalid Selection!\n";
    }
    return 0;
}
