
#include <iostream>
using namespace std;
int main()
{
    int door, key, password;

    cout << "===== HIGH SECURITY ESCAPE ROOM =====" << endl;
    cout << "Choose the correct door to escape!" << endl;

    cout << "\nWhich door is the correct exit?" << endl;
    cout << "1. Blue Door" << endl;
    cout << "2. Red Door" << endl;
    cout << "3. Black Door" << endl;
    cout << "Enter your choice: ";
    cin >> door;

    if (door == 1)
    {
        cout << "\nCorrect door! Now find the key." << endl;

        cout << "\nWhat is the color of the key?" << endl;
        cout << "1. Blue" << endl;
        cout << "2. Red" << endl;
        cout << "3. Green" << endl;
        cout << "Enter your choice: ";
        cin >> key;

        if (key == 2)
        {
            cout << "\nCorrect key! Now unlock the security system." << endl;

            cout << "\nEnter the secret password: ";
            cin >> password;

            if (password == 1234)
            {
                cout << "\nSecurity Code Correct!" << endl;
                cout << "Congratulations! YOU ESCAPED!" << endl;
            }
            else
            {
                cout << "\nWrong Password! The door remains locked!" << endl;
            }
        }
        else
        {
            cout << "\nWrong Key! You cannot unlock the door!" << endl;
        }
    }
    else
    {
        cout << "\nWrong Door! You are still trapped!" << endl;
    }

    return 0;
}

