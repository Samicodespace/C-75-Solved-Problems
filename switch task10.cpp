#include <iostream>

using namespace std;

int main() {
    int choice;
    int marks;

    cout << "1: BSCS  2: BBA\nChoice: ";
    cin >> choice;

    cout << "Marks: ";
    cin >> marks;

    switch (choice) {
        case 1:
            cout << "BSCS\n";
            if (marks > 80) cout << "Fee: 25000\n";
            else cout << "Fee: 90000\n";
            break;

        case 2:
            cout << "BBA\n";
            if (marks > 70) cout << "Fee: 30000\n";
            else cout << "Fee: 80000\n";
            break;

        default:
            cout << "Invalid!\n";
    }

    return 0;
}
