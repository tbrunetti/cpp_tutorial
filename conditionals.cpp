#include <iostream>
using namespace std;

// short hand if..else (ternary operator) - syntax below:
// variable = (condition) ? expressionTrue : expressionFalse;

int main(){
    if (20 > 18) {
        cout << "20 is greater than 18" << "\n";
    }
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y" << endl;
        cout << x << " is greater than " << y << endl;
    }

    int time = 22;
    if (time < 10) {
        cout << "Good merning." << "\n";
    }else if (time < 20) {
        cout << "Good dat." << endl;
    } else {
        cout << "Good evening." << "\n";
    }

    string result = (time < 12) ? "Good day." : "Good evening.";
    cout << result << "\n";
    return 0;
}

