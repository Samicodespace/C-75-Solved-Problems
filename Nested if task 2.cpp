#include <iostream>
using namespace std;
int main()
{
    int p, m, e, f;
    float average;
    cout << "Enter Programming marks: ";
    cin >> p;
    cout << "Enter Math marks: ";
    cin >> m;
    cout << "Enter English marks: ";
    cin >> e;
    cout << "Enter Physics marks: ";
    cin >> f;
    if (p >= 0 && p <= 100)
    {
        if (m >= 0 && m <= 100)
        {
            if (e >= 0 && e <= 100)
            {
                if (f >= 0 && f <= 100)
                {
                    if (p >= 50 && m >= 50 && e >= 50 && f >= 50)
                    {
                        average = (p + m + e + f) / 4.0;
                        if (average >= 80){
                            cout << "Grade A";
                        }
                        else if (average >= 70){
						
                            cout << "Grade B";
                        }
                        else{
						
                            cout << "Grade C";
                        }
                    }
                    else{
                        cout << "Fail";
                    }
                }
                else
                    cout << "Invalid Physics Marks";
            }
            else
                cout << "Invalid English Marks";
        }
        else
            cout << "Invalid Math Marks";
    }
    else
        cout << "Invalid Programming Marks";

    return 0;
}
