#include <iostream>
#include <string>
using namespace std;
int main() {
   string country;
    char rank;
    int salary;

    cout << " ======= Global Tax Tracker ========"<<endl;
    cout << "Enter Country Name: ";
    cin >> country;
    cout << "Enter Rank A or B ";
    cin >> rank;
    cout << "Enter Annual Salary: ";
    cin >> salary;
 cout<<endl;
    if (country == "USA"|| country =="China"|| country =="France"|| country =="Russia"||country =="Germany" ) {
        if (rank == 'A') {
            if (salary > 100000) {
                cout << "Tax Rate: 28%\n";
            }
            if (salary <= 100000) {
                std::cout << "Tax Rate: 24%\n";
            }
        }
        if (rank == 'B') {
            if (salary > 60000) {
			cout << "Tax Rate: 22%\n";
            }
            if (salary <= 60000) {
                cout << "Tax Rate: 15%\n";
            }
        }else{
        	cout<<"invalid rank";
		}
    }
    
    if (country != "USA"|| country !="China"|| country !="France"|| country !="Russia"||country !="Germany"); {
        if (salary > 80000) {
            cout << "Tax Rate: 30% (International Fixed)\n";
        }
        if (salary <= 80000) {
            cout << "Tax Rate: 20% (International Fixed)\n";
        }
    }

    return 0;
}
