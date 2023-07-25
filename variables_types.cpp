#include <iostream>  //header file library
using namespace std; //use names for objects and variables from the standard library

/* variable types:
int - stores integers
double - stores float
char - stores single characters (surrounded by single quotes ')
string - stores text (surrounded by double quotes ")
bool - true/false

general syntax for declaring variables:
type variableName = value;
*/

int main() {
    int myNum = 15;
    cout << myNum << endl;
    int newNum; // declare a variable with no value byt assign value later
    newNum = 10;
    cout << newNum << endl;
    newNum = 7;
    cout << newNum << endl;
    // cout can be combined with strings and variables
    int myAge = 7;
    cout << "I am " << myAge << " years old." << endl;
    // add variables
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;

    //Exercise: Create a variable named myNum and assign the value 50 to it.
    int myNewNum = 50; // once a variable has been previously declared, you can't re-declare it
    cout << myNewNum << "\n";

    int a = 5, b = 6, c = 7; //declare multiple variable of same type by comma-separating
    cout << a + b + c << endl;

    int i, j, k; // declare 3 empty variables of type int
    i = j = k = 50; // set all 3 variables to have a value of 50
    cout << i + j + k << "\n";

    const int specialNum = 15; //variable specialNum will always be type int and value of 15; immutable!
    //specialNum = 10; would result in an error: assignment of read-only variable 'myNum'

    const int minutesPerHour = 60;
    const float PI = 3.14;

}