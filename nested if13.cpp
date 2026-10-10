#include <iostream>
using namespace std;
int main() {
    int dry;
    char heat;
    cout << "Enter Soil Dryness (1-100): ";
    cin >> dry;
    cout << "Is it too hot outside? (Y/N): ";
    cin >> heat;
 cout<<endl;
    if (dry > 60) {
        if (heat == 'Y') {
            cout << " Need Full Watering\n";
        }
        if (heat != 'Y') {
            cout << "No need dwater \n";
        }
    }

    if (dry <= 60) {
        cout << "water i think available";
    }

    return 0;
}
