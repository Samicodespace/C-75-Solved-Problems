#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num;
    cout << "--- Calculator ---\n";
    cout << "1: Square Root\n";
    cout << "3: Sin and Cos\n";
    cout << "4: Log\n";
    
    cout << "\nEnter Choice (1-4): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter Number: ";
            cin >> num;
            if (num < 0) {
                cout << "Error: Negative Number!\n";
            } 
            else {
                cout << "Answer: " << sqrt(num) << "\n";
            }
            break;

        case 3:
            cout << "Enter Degree: ";
            cin >> num;
            double rad;
            rad = num * 3.14159 / 180;
            cout << "Sin: " << sin(rad) << "\n";
            cout << "Cos: " << cos(rad) << "\n";
            break;
        case 4:
            cout << "Enter Number: ";
            cin >> num;
            if (num <= 0) {
                cout << "Error: Invalid Value!\n";
            } 
            else {
                cout << "Log Base 10: " << log10(num) << "\n";
            }
            break;
        default:
            cout << "Invalid Selection!\n";
    }
   return 0;
}
