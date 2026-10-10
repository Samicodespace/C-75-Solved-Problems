#include <iostream>

using namespace std;

int main() {
    int day;

    cout << "Enter Day Number (1-7): ";
    cin >> day;

    cout << "\n--- Day Finance Tip ---\n";

    switch (day) {
        case 1:
            cout << "Day: Monday\n";
            cout << "Tip: Avoid outside coffee. Save 500 PKR today!\n";
            break;

        case 2:
            cout << "Day: Tuesday\n";
            cout << "Tip: Bring homemade lunch to office. Save 800 PKR!\n";
            break;

        case 3:
            cout << "Day: Wednesday\n";
            cout << "Tip: Mid-week check. Do not open online shopping apps.\n";
            break;

        case 4:
            cout << "Day: Thursday\n";
            cout << "Tip: Fuel up before the weekend rush and price check.\n";
            break;

        case 5:
            cout << "Day: Friday\n";
            cout << "Tip: Weekend starts! Budget your outing to 2000 PKR.\n";
            break;

        case 6:
            cout << "Day: Saturday\n";
            cout << "Tip: Bulk grocery shopping day. Stick strictly to your list!\n";
            break;

        case 7:
            cout << "Day: Sunday\n";
            cout << "Tip: Electricity check. Turn off extra ACs/lights to save bill.\n";
            break;

        default:
            cout << "Invalid Day Number!\n";
    }

    return 0;
}
