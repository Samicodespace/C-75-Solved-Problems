#include <iostream>
#include <string>
using namespace std;
int main() {
    int score;
    int balls;
    char out;
    cout << "--- Cricket Match---\n";
    cout << "Enter Score: ";
    cin >> score;
    cout << "Enter Balls Left: ";
    cin >> balls;
    cout << "Is main batsman out? (Y/N): ";
    cin >> out;
    cout << "\n--- Match Situation ---\n";
    if (score > 150) {
        if (out == 'N') {
            if (balls > 30) {
                cout << "Prediction: Easy Win\n";
                cout << "Target: Safe Chasing\n";
            }
            if (balls <= 30) {
                cout << "Prediction: Close Match\n";
                cout << "Target: Need Sixes\n";
            }
        }
        if (out != 'N') {
            if (balls > 30) {
                cout << "Prediction: Hard Fight\n";
            }
            if (balls <=30) {
                cout << "Prediction: High Pressure\n";
                cout << "Target: Run Fast\n";
            }
        }
    }

    if (score <= 150 && score >= 50) {
        if (balls>=30) {
            if (out == 'N') {
                cout << "Prediction: Balanced Game\n";
            }
            if (out != 'N') {
                cout << "Prediction: Bowlers need efforts]\n";
            }
        } 
		else{
        	cout<<"Critical condition"<<endl;
		}
	}
        if (score <50) {
        	if(balls>=30){
        		if(out!='N'){
			
            cout << "Prediction: Very Low Score\n";
        }
        else{
        	cout<<"Main player need struggle"<<endl;
		}	
        }
		else{
			cout<<"Match is almost you defeated due to low ball"<<endl;
		}
            } 
			else{
            	cout<<"score is too low"<<endl;
			}
    return 0;
}
