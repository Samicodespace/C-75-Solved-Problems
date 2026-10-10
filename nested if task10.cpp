#include <iostream>
#include <string>
using namespace std;
int main() {
    
    int bill;         
    int dist;        
   string type; 
    cout << "Enter Total Bill Amount: ";
 cin >> bill;
   cout << "Enter Delivery Distance (in KM): ";
   cin >> dist;
    cout << "Enter Delivery Type (Fast / Normal): ";
    cin >> type;
    if (bill >= 2000) {
        if (dist <= 10) {
           cout << "Shipping Status: FREE Standard Delivery Approved!\n";
            cout << "Delivery Charges: 0 PKR\n";
            if (type == "Fast") {
                cout << "Note: Upgraded to priority dispatch at no extra cost.\n";
            }
        }
        if (dist > 10) {
            if (type == "Fast") {
                cout << "Shipping Status: Long Distance \n";
                cout << "Delivery Charges: 250 PKR\n";
            }
            if (type != "Fast") {
                cout << "Shipping Status: Long Distance Standard Shipping\n";
                cout << "Delivery Charges: 100 PKR\n";
            }
        }
    }

    if (bill < 2000) {
        if (type == "Fast") {
            if (dist > 15) {
                cout << "Shipping Status: High-Distance Express Delivery\n";
                cout << "Delivery Charges: 500 PKR\n";
            }
            if (dist <= 15) {
                cout << "Shipping Status: Standard Express Delivery\n";
                cout << "Delivery Charges: 300 PKR\n";
            }
        }
        if (type != "Fast") {
            cout << "Shipping Status: Base Value Budget Delivery\n";
            cout << "Delivery Charges: 150 PKR\n";
            
            if (bill < 500) {
                cout << "Alert: Low value order. Small cart fee of 50 PKR applied.\n";
            }
        }
    }
    return 0;
}

