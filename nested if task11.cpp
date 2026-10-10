#include <iostream>
using namespace std;
int main() {
    int alt;
    int fuel;
    char rain;
    cout << "--- Flight System ---\n";
    cout << "Enter Height: ";
    cin >> alt;
    cout << "Enter Fuel: ";
    cin >> fuel;
    cout << "Is it raining? (Y/N): ";
    cin >> rain;
    cout << "\n--- Result ---\n";
    if (alt > 5000) {
        if (rain == 'Y') {
            if (fuel > 30) {
                cout << "Normal Flight\n";
                cout << " Turn On Wipers\n";
            }
            if (fuel <= 30) {
                cout << "Status: Low Fuel Alert\n";
                cout << "Action: Land Immediately\n";
            }
        }
        if (rain != 'Y') {
            if (fuel > 15) {
                cout << "Status: Safe Flying\n";
            }
            if (fuel <= 15) {
                cout << "Status: Critical Fuel\n";
                cout << "Action: Move to Nearest Airport\n";
            }
        }
    }
    if (alt <= 5000 && alt >=1000){
    	if(fuel<=10){
    		cout<<"Low fuel danger!"<<endl;
		}
		if(fuel>=10){
		 cout<<"fuel is okay"<<endl;
		}
            if (rain == 'Y') {
                cout << "Status: Low Flying Danger\n";
                cout << "Action: Use Manual Control\n";
            }
            if (rain != 'Y') {
                cout << "Status: Preparing for Landing\n";
            }
        
        if (alt < 1000) {
            cout << "Status: Alert! Too Close to Ground\n"; 
            if (fuel < 10) {
                cout << "Action: Open Parachute Now\n";
            }
        }
    }
    return 0;
}
