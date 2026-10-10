#include <iostream>
using namespace std;
int main() {
    int choice;
    int money;
    int price;
    int change;
    cout << "--- Vending Machine Menu ---\n";
    cout << "1: Pepsi (120 PKR)\n";
    cout << "2: Juice (150 PKR)\n";
    cout << "3: Chips (60 PKR)\n";
    cout << "4: Chocolate (200 PKR)\n";
    
    cout << "\nSelect Item Number (1-4): ";
    cin >> choice;
    switch (choice) {
        case 1:
            price = 120;
            cout << "Item: Pepsi\n";
            cout << "Price: " << price << " PKR\n";
            cout << "Insert Money (PKR Notes): ";
            cin >> money;         
            if (money < price) {
                cout << " Transaction Cancelled\n";
                cout << "Insufficient Cash\n";
            } 
            else {
                change = money - price;
                cout << "  Pepsi\n";
                cout << "Change Returned: " << change << " PKR\n";
            }
            break;
        case 2:
            price = 150;
            cout << "Item: Juice\n";
            cout << "Price: " << price << " PKR\n";
            cout << "Insert Money (PKR Notes): ";
            cin >> money;           
            if (money < price) {
                cout << "Transaction Cancelled\n";
                cout << "Insufficient Cash\n";
            } 
            else {
                change = money - price;
                cout << " Juice\n";
                cout << "Change Returned: " << change << " PKR\n";
            }
            break;
        case 3:
            price = 60;
            cout << "Item: Chips\n";
            cout << "Price: " << price << " PKR\n";
            cout << "Insert Money (PKR Notes): ";
            cin >> money;   
            if (money < price) {
                cout << "Transaction Cancelled\n";
                cout << " Insufficient Cash\n";
            } 
            else {
                change = money - price;
                cout << "Chips\n";
                cout << "Change Returned: " << change << " PKR\n";
            }
            break;

        case 4:
            price = 200;
            cout << "Item: Chocolate\n";
            cout << "Price: " << price << " PKR\n";
            cout << "Insert Money (PKR Notes): ";
            cin >> money;  
            if (money < price) {
                cout << " Transaction Cancelled\n";
                cout << "Insufficient Cash\n";
            } 
            else {
                change = money - price;
                cout << " Chocolate\n";
                cout << "Change Returned: " << change << " PKR\n";
            }
            break;
        default:
            cout << " System Locked\n";
            cout << " Invalid Menu Selection\n";
    }
    return 0;
}
