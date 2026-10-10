#include <iostream>

using namespace std;

int main() {
    int network;
    int package;

    cout << "--- Mobile Recharge System ---\n";
    cout << "1: Jazz\n";
    cout << "2: Zong\n";
    cout << "3: Ufone\n";
    cout << "4: Telenor\n";
    
    cout << "\nSelect Network (1-4): ";
    cin >> network;

    cout << "\n--- Select Package Tier ---\n";
    cout << "1: Daily Package\n";
    cout << "2: Weekly Package\n";
    cout << "3: Monthly Package\n";
   
    cout << "\nSelect Package Type (1-3): ";
    cin >> package;

    switch (network) {
        case 1:
            cout << "Network: Jazz\n";
            switch (package) {
                case 1:
                    cout << "Package: Jazz Daily Surf\n";
                    cout << "Price: 50 PKR\n";
                    break;
                case 2:
                    cout << "Package: Jazz Super Weekly\n";
                    cout << "Price: 350 PKR\n";
                    break;
                case 3:
                    cout << "Package: Jazz Monthly Premium\n";
                    cout << "Price: 1200 PKR\n";
                    break;
                default:
                    cout << "Error: Invalid Package Option\n";
            }
            break;

        case 2:
            cout << "Network: Zong\n";
            switch (package) {
                case 1:
                    cout << "Package: Zong Day Out\n";
                    cout << "Price: 60 PKR\n";
                    break;
                case 2:
                    cout << "Package: Zong Weekly Pro\n";
                    cout << "Price: 400 PKR\n";
                    break;
                case 3:
                    cout << "Package: Zong Monthly Max\n";
                    cout << "Price: 1500 PKR\n";
                    break;
                default:
                    cout << "Error: Invalid Package Option\n";
            }
            break;

        case 3:
            cout << "Network: Ufone\n";
            switch (package) {
                case 1:
                    cout << "Package: Ufone Daily Light\n";
                    cout << "Price: 45 PKR\n";
                    break;
                case 2:
                    cout << "Package: Ufone Weekly Super\n";
                    cout << "Price: 300 PKR\n";
                    break;
                case 3:
                    cout << "Package: Ufone Monthly Hybrid\n";
                    cout << "Price: 1000 PKR\n";
                    break;
                default:
                    cout << "Error: Invalid Package Option\n";
            }
            break;

        case 4:
            cout << "Network: Telenor\n";
            switch (package) {
                case 1:
                    cout << "Package: Telenor Daily Star\n";
                    cout << "Price: 55 PKR\n";
                    break;
                case 2:
                    cout << "Package: Telenor Weekly Ultra\n";
                    cout << "Price: 380 PKR\n";
                    break;
                case 3:
                    cout << "Package: Telenor Monthly Unlimited\n";
                    cout << "Price: 1300 PKR\n";
                    break;
                default:
                    cout << "Error: Invalid Package Option\n";
            }
            break;
        default:
            cout << "Error: Invalid Network Selection\n";
    }
    return 0;
}
