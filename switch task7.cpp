#include <iostream>

using namespace std;

int main() {
    char ans1, ans2, ans3;
    int score = 0;

    cout << "=========================================\n";
    cout << "         WELCOME TO THE QUIZ GAME        \n";
    cout << "=========================================\n\n";

    cout << "Q1: What is the capital of Pakistan?\n";
    cout << "A) Lahore\nB) Karachi\nC) Islamabad\nD) Peshawar\n";
    cout << "Your Answer : ";
    cin >> ans1;
    switch (ans1) {
        case 'C':
        case 'c':
            score = score + 10;
            break;
        default:
            break;
    }
    cout << "\nQ2: Which language is this program written in?\n";
    cout << "A) Java\nB) C++\nC) Python\nD) HTML\n";
    cout << "Your Answer ";
    cin >> ans2;

    switch (ans2) {
        case 'B':
        case 'b':
            score = score + 10;
            break;
        default:
            break;
    }

    cout << "\nQ3: What is 5 + 5 * 2?\n";
    cout << "A) 20\nB) 15\nC) 25\nD) 10\n";
    cout << "Your Answer: ";
    cin >> ans3;

    switch (ans3) {
        case 'B':
        case 'b':
            score = score + 10;
            break;
        default:
            break;
    }
    cout << "Your Score: " << score << " / 30\n";

    switch (score) {
        case 30:
            cout << " Genius Perfect Score!\n";
            break;
        case 20:
            cout << "Very Good Job!\n";
            break;
        case 10:
            cout << "Need Improvement!\n";
            break;
        case 0:
            cout << "Better Luck Next Time!\n";
            break;
    }
    return 0;
}
