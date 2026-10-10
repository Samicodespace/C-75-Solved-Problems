
#include <iostream>
using namespace std;
int main() {
    int wheels;
    int weight;
    int speed;
    cout << "=========================================\n";
    cout << "     HIGHWAY TOLL & FITNESS ENGINE       \n";
    cout << "=========================================\n\n";
    cout << "Enter number of wheels (4 or 6): ";
    cin >> wheels;
    if (wheels == 4) {
        cout << "Enter vehicle weight: ";
        cin >> weight;
        cout << "Enter vehicle speed: ";
        cin >> speed;
        if (weight > 3500) {
            cout << "Overloaded Passenger Vehicle\n";
            cout << "Toll Tax: 500 Pkr\n";
            if (speed > 120) {
                cout << "Fine: 1500 PKR (Over-speeding)\n";
            }
            else {
                cout << "Normal Speed. Allowed to pass.\n";
            }
        }
        else {
            cout << "Standard\n";
            cout << "Toll Tax: 200 PKR\n";

            if (speed > 120) {
                cout << "Fine: 1000 PKR (Over-speeding)\n";
            }
            else {
                cout << "Safe Driving.\n";
            }
        }
    }
        if (wheels == 6) {
            cout << "Enter vehicle weight: ";
            cin >> weight;

            cout << "Enter vehicle speed: ";
            cin >> speed;

            if (weight > 15000) {
                cout << "Heavy Cargo\n";
                cout << "Toll Tax: 1500 PKR\n";

                if (speed > 90) {
                    cout << "Overspeeding\n";
                    cout << "Fine: 3000 PKR\n";
                }
                else {
                    cout << "Normal Speed\n";
                }
            }
            else {
                cout << "Weight in limit, pass!\n";
                cout << "Toll Tax: 800 PKR\n";

                if (speed > 110) {
                    cout << "Fine: 2000 PKR (Bus Over-speeding)\n";
                }
                else {
                    cout << "Status: Pass Approved.\n";
                }
            }
        }
        else {
            cout << "Kindly choose correct number of wheels!" << endl;
        }
    }


