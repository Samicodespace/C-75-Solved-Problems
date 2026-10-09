#include <iostream>
using namespace std;
int main() {
    int age, score;
    char id, qualify, penalty;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 16) {
        cout << "Valid gaming ID? (y/n): ";
        cin >> id;
        if (id == 'y'|| id=='Y') {
            cout << "Qualified in round? (y/n): ";
            cin >> qualify;

            if (qualify == 'y'|| qualify =='Y') {
                cout << "Enter score: ";
                cin >> score;
                if (score >= 70) {
                    cout << "Any penalty? (y/n): ";
                    cin >> penalty;
                    if (penalty == 'n'|| penalty=='Y'){
					
                        cout << "Eligible for tournament";
                    }
                    else
                        cout << "Disqualified due to penalty";
                }
				 else {
                    cout << "Score too low";
                }
            }
			 else {
                cout << "Qualifying round not cleared";
            }
        }
		 else {
            cout << "Invalid gaming ID";
        }
    } 
	else {
        cout << "Age is below 16 ";
}
    return 0;
}
