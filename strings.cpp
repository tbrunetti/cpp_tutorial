#include <iostream>
#include <string>
using namespace std;

int main() {
    // create string variable
    string greeting = "Hello";
    cout << greeting << endl;

    // string concatenation
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName << "\n";

    fullName = firstName + " " + lastName;
    cout << fullName << "\n";

    fullName = firstName.append(lastName);
    cout << fullName << "\n";

    // string length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl; // .size() is an alias for .length()

    // accessing a string
    string myString = "Hello";
    cout << myString[0] << endl;

    // change characters of a string
    myString[0] = 'J';
    cout << myString << endl; // strings are mutable

    // user input as a string
    string first;
    cout << "Type your first name: ";
    cin >> first;
    cout << "Your name is: " << first << "\n";

    string full;
    cout << "Type your full name: ";
    cin >> full;
    cout << "Your full name is: " << full << "\n"; // only returns the first part of name if there is a literal space in full name
    //this is corrected by using the getline() function
    string wholeName;
    cout << "Type your full name: " << "\n";
    getline(cin, wholeName);
    cout << "Your name is: " << wholeName << "\n";
    cout << "Your name is: " << wholeName;

    return 0;
}