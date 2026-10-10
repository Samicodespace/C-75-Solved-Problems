#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    int age;
    int token = 45; 
    cout << "--- Hospital Token Counter ---\n";
    cout << "1: Cardiology\n";
    cout << "2: ENT\n";
    cout << "3: Pediatrics\n";

    cout << "\nSelect Department (1-3): ";
    cin >> choice;
    cout << "Enter Patient Age: ";
    cin >> age;
cout<<endl;
    switch (choice) {
        case 1:
            cout << "Department: Cardiology\n";
            cout << "Token Number: CAR-" << token << "\n";
            
            if (age >= 60) {
                cout << "Fee: 1000 PKR (Senior Citizen 50% Discount)\n";
            } 
            else if (age < 12) {
                cout << "Fee: 1500 PKR (Child Discount applied)\n";
            } 
            else {
                cout << "Fee: 2000 PKR\n";
            }
            break;
        case 2:
            cout << "Department: ENT Clinic\n";
            cout << "Token Number: ENT-" << token << "\n";  
            if (age >= 65) {
                cout << "Fee: 0 PKR (Free Checkup for Senior Citizens)\n";
            } 
            else if (age <= 5) {
                cout << "Fee: 800 PKR (Infant Discount)\n";
            } 
            else {
                cout << "Fee: 1500 PKR\n";
            }
            break;
        case 3:
            cout << "Department: Pediatrics (Child Care)\n";
            cout << "Token Number: PED-" << token << "\n";
            if (age > 12) {
                cout << "Error: Patient age limit exceeded for Pediatrics!\n";
                cout << "Please visit General OPD\n";
            } 
            else if (age <= 2) {
                cout << "Fee: 600\n";
            } 
            else {
                cout << "Fee: 1200 \n";
            }
            break;
        default:
            cout << "Registration Failed\n";
            cout << "Invalid Department Choice Selected\n";
    }
    return 0;
}
