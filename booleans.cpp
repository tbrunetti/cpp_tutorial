#include <iostream>
using namespace std;


// true returns 1
// false returns 0

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;
    cout << isFishTasty << "\n";

    int x = 10;
    int y = 9;
    cout << (x >y) << "\n";
    cout << (10 >9) << "\n";
    cout << (x == 10) << "\n";

    int myAge = 25;
    int votingAge = 18;
    cout << (myAge >= votingAge) << endl;
    if (myAge >= votingAge) {
        cout << "Old enough to vote!" << "\n";
    } else {
        cout << "Not old enough to vote!" << "\n";
    }
    return 0;
}