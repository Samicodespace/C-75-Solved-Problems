#include <iostream>

using namespace std;

int main() {
    int choice;
    int amount;
    int balance = 50000;
    int deposit;

    cout << "--- Welcome to ATM System ---\n";
    cout << "1: Check Balance\n";
    cout << "2: Withdraw Cash\n";
    cout << "3: Deposit Money\n";
    
    cout << "\nEnter Choice (1-3): ";
    cin >> choice;

    cout << "\n--- Transaction Receipt ---\n";

    switch (choice) {
        case 1:
            cout << "Current Balance: " << balance << " PKR\n";
            break;

        case 2:
        		cout<<"Your current balance is:"<<balance;
            cout << "\nEnter Amount to Withdraw: ";
            cin >> amount;
            if (amount>balance) {
                cout << " Transaction Failed\n";
                cout << " Insufficient Balance\n";
            } 
            if(amount<=balance){
            	cout<<amount<<" is withdrwa from account"<<endl;
            	balance=balance-amount;
                cout<<"Your new balance is "<<balance;
			}
			break;
        case 3:
        	cout<<"Your current balance is: "<<balance;
            cout << "\nEnter Amount to Deposit: ";
            cin >> deposit;
				balance=deposit +balance;
				cout<<"your new balance is :"<<balance;    
 break;
        default:
            cout << "Operation Terminated\n";
            cout << "Invalid Option Selected\n";
    }

    return 0;
}
