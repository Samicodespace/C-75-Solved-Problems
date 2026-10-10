#include <iostream>
using namespace std;
int main() {
    int month;
    int day;
    cout << "--- Zodiac Finder ---\n";    
    cout << "\nEnter Month Number (1-12): ";
    cin >> month;
    cout << "Enter Day of Month (1-31): ";
    cin >> day;
    switch (month) {
        case 1:
            if (day >= 20) {
                cout << " your Sign is Aquarius\n";
            } else {
                cout << "your Sign is Capricorn\n";
            }
            break;
        case 2:
            if (day >= 19) {
                cout << "your Sign isPisces\n";
            } else {
                cout <<"your Sign is Aquarius\n";
            }
            break;
        case 3:
            if (day >= 21) {
                cout << "your Sign is Aries\n";
            } else {
                cout << "your Sign is Pisces\n";
            }
            break;
        case 4:
            if (day >= 20) {
                cout << "your Sign is Taurus\n";
            } else {
                cout << "your Sign is Aries\n";
            }
            break;
        case 5:
            if (day >= 21) {
                cout << "your Sign is Gemini\n";
            } else {
                cout <<"your Sign is Taurus\n";
            }
            break;
        case 6:
            if (day >= 21) {
                cout << "your Sign is Cancer\n";
            } else {
                cout << "your Sign is Gemini\n";
            }
            break;
        case 7:
            if (day >= 23) {
                cout << "your Sign is Leo\n";
            } else {
                cout << "your Sign is Cancer\n";
            }
            break;
        case 8:
            if (day >= 23) {
                cout << "your Sign is Virgo\n";
            } else {
                cout << "your Sign is Leo\n";
            }
            break;
        case 9:
            if (day >= 23) {
                cout << "your Sign is Libra\n";
            } else {
                cout << "your Sign is Virgo\n";
            }
            break;
        case 10:
            if (day >= 23) {
                cout << "your Sign is Scorpio\n";
            } else {
                cout << "your Sign is Libra\n";
            }
            break;
        case 11:
            if (day >= 22) {
                cout << "your Sign is Sagittarius\n";
            } else {
                cout << "your Sign is Scorpio\n";
            }
            break;
        case 12:
            if (day >= 22) {
              cout<< " your Sign is Capricorn\n";
            } else {
                cout << "Sign: Sagittarius\n";
            }
            break;
        default:
            cout << "Error: Invalid Month Selection!\n";
    }
    return 0;
}
