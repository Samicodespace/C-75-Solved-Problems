
#include <iostream>
using namespace std;
int main()
{
    int department, condition;
    cout << "====================================" << endl;
    cout << "    SMART CITY MANAGEMENT SYSTEM    " << endl;
    cout << "====================================" << endl;

    cout << "\nSelect Department:" << endl;
    cout << "1. Traffic Management" << endl;
    cout << "2. Electricity Supply" << endl;
    cout << "3. Water Supply" << endl;
    cout << "4. Waste Management" << endl;
    cout << "5. Emergency Services" << endl;

    cout << "\nEnter your choice: ";
    cin >> department;

    if (department >= 1)
    {
        if (department <= 5)
        {
            if (department == 1)
            {
                cout << "\nIs the traffic signal working? (1=Yes, 0=No): ";
                cin >> condition;
                if (condition == 1)
                {
                    cout << "Is traffic flow normal? (1=Yes, 0=No): ";
                    cin >> condition;

                    if (condition == 1)
                    {
                        cout << "Traffic is flowing normally." << endl;
                    }

                    if (condition == 0)
                    {
                        cout << "Heavy traffic detected." << endl;
                    }
                }

                if (condition == 0)
                {
                    cout << "Traffic signal failure reported." << endl;
                }
            }

            if (department == 2)
            {
                cout << "\nIs electricity available? (1=Yes, 0=No): ";
                cin >> condition;

                if (condition == 1)
                {
                    cout << "Is power demand normal? (1=Yes, 0=No): ";
                    cin >> condition;

                    if (condition == 1)
                    {
                        cout << "Electricity supply is stable." << endl;
                    }

                    if (condition == 0)
                    {
                        cout << "High power demand detected." << endl;
                    }
                }

                if (condition == 0)
                {
                    cout << "Power out reported." << endl;
                }
            }

            if (department == 3)
            {
                cout << "\nIs water available? (1=Yes, 0=No): ";
                cin >> condition;

                if (condition == 1)
                {
                    cout << "Is water quality acceptable? (1=Yes, 0=No): ";
                    cin >> condition;

                    if (condition == 1)
                    {
                        cout << "Water supply is normal." << endl;
                    }

                    if (condition == 0)
                    {
                        cout << "Water quality problem detected." << endl;
                    }
                }

                if (condition == 0)
                {
                    cout << "Water shortage reported." << endl;
                }
            }
            if (department == 4)
            {
                cout << "\nIs the collection vehicle available? (1=Yes, 0=No): ";
                cin >> condition;

                if (condition == 1)
                {
                    cout << "Is the collection route clear? (1=Yes, 0=No): ";
                    cin >> condition;

                    if (condition == 1)
                    {
                        cout << "Waste collection can proceed." << endl;
                    }

                    if (condition == 0)
                    {
                        cout << "Choose an alternative route." << endl;
                    }
                }

                if (condition == 0)
                {
                    cout << "Collection vehicle is unavailable." << endl;
                }
            }

            if (department == 5)
            {
                cout << "\nIs an emergency reported? (1=Yes, 0=No): ";
                cin >> condition;

                if (condition == 1)
                {
                    cout << "Are emergency services available? (1=Yes, 0=No): ";
                    cin >> condition;

                    if (condition == 1)
                    {
                        cout << "Emergency services good." << endl;
                    }

                    if (condition == 0)
                    {
                        cout << "Request another emergency unit." << endl;
                    }
                }

                if (condition == 0)
                {
                    cout << "No emergency reported." << endl;
                }
            }
        }
		else{
        	cout<<"Invalid number";
        }
    }
    else{
    	cout<<"Choose numbers btw 1 to 5";
    }
  

    return 0;
}

