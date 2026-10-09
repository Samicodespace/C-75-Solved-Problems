#include <iostream>
using namespace std;
int main()
{
    int marks, test, interview;
    char documents;
    cout << "Enter intermediate marks percentage: ";
    cin >> marks;
    if (marks >= 70)
    {
        cout << "Enter entry test percentage: ";
        cin >> test;
        if (test >= 80)
        {
            cout << "Enter interview score: ";
            cin >> interview;
            if (interview >= 75)
            {
                cout << "Are documents verified? (y/n): ";
                cin >> documents;
                if (documents == 'y' || documents == 'Y')
                {
                    cout << "Admission Confirmed";
                }
                else
                {
                    cout << "Documents Not Verified";
                }
            }
            else
            {
                cout << "Interview Failed";
            }
        }
        else
        {
            cout << "Entry Test Criteria Not Met";
        }
    }
    else
    {
        cout << "Intermediate Marks Criteria Not Met";
    }
    return 0;
}
