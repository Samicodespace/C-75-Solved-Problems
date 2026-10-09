
#include <iostream>
using namespace std;
int main()
{
    int id, clearance, password;
    cout << "===== SECRET LABORATORY =====" << endl;
    cout << "\nIs your scientist ID valid?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Enter your choice: ";
    cin >> id;
    if (id == 1)
    {
        cout << "\nEnter your security clearance level (1-5): ";
        cin >> clearance;
        if (clearance >= 4 && clearance <= 5)
        {
            cout << "\nEnter the secret laboratory password: ";
            cin >> password;
            if (password == 5678)
            {
                cout << "\nIdentity Verified" << endl;
                cout << "Security Clearance Approved!" << endl;
                cout << "Password Correct!" << endl;
                cout << "\nACCESS GRANTED!" << endl;
                cout << "Welcome to the Secret Laboratory";
            }
            else
            {
                cout << "\nIncorrect Password" << endl;
                cout << "ACCESS DENIED!";
            }
        }
        else
        {
            cout << "\nInsufficient Security Clearance" << endl;
            cout << "ACCESS DENIED!";
        }
    }
    else
    {
        cout << "\nInvalid Scientist ID" << endl;
        cout << "ACCESS DENIED!";
    }
    return 0;
}

