
#include <iostream>
using namespace std;

int main()
{
    int facility, spaceAvailable, Registration, Paid;
    float Height;

    cout << "Is parking facility open? (1/0): ";
    cin >> facility;

    if (facility == 1)
    {
        cout << "Is parking space available? (1/0): ";
        cin >> spaceAvailable;
        if (spaceAvailable == 1)
        {
            cout << "Is registration valid? (1/0): ";
            cin >> Registration;

            if (Registration == 1)
            {
                cout << "Enter vehicle height: ";
                cin >> Height;

                if (Height <= 2.2)
                {
                    cout << "Is parking fee paid? (1/0): ";
                    cin >> Paid;

                    if (Paid == 1)
                    {
                        cout << "Vehicle Entry Allowed";
                    }
                    else
                    {
                        cout << "Parking fee not paid";
                    }
                }
                else
                {
                    cout << "Vehicle height exceeds 2.2 meters";
                }
            }
            else
            {
                cout << "Invalid vehicle registration";
            }
        }
        else
        {
            cout << "No parking space available";
        }
    }
    else
    {
        cout << "Parking facility is closed";
    }

    return 0;
}


