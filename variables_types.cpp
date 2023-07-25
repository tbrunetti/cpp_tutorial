#include <iostream>  //header file library
#include <string>
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

    int userIn;
    cout << "Type a number: "; // Type a number and press enter
    cin >> userIn; //Get user input from the keyboard
    cout << "Your number is: " << userIn << "\n"; //Display the input value

    // Create a calculator that adds two user input values
    int in1, in2;
    int newSum;
    cout << "Type a number: ";
    cin >> in1;
    cout << "Type another number: ";
    cin >> in2;
    newSum = in1 + in2;
    cout << "Sum is: " << newSum << endl;

    /* data types:
    boolean = 1 byte = true/false
    char = 1 byte = single character/letter/number, or ASCII values
    int = 2 or 4 bytes = whole number without decimals
    float = 4 bytes = fractional number containing 1 or more decimals (6-7 decimal digits)
    double = 8 bytes = fraction numbers containing 1 or more decimanls (15 decimal digits)
    */

    // scientific notation example; lowercase e and capital E can be used interchangeably to denote power of 10
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << "\n";
    cout << d1 << endl;

    // boolean example
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << "\n"; // Outputs 1 (true)
    cout << isFishTasty << endl; // Outputs 0 (false)

    // char example; must be a single character surrounded by single quotes '
    char myGrade = 'B';
    cout << myGrade << endl;
    // char example using ASCII values
    char d = 65, e = 66, f = 67;
    cout << d << "\n";
    cout << e << "\n";
    cout << f << endl;



    /* string example 
    You must include an additiona header file in the source code to use string as it is not a 
    built-in type: #include <string> */
    string greeting = "Hello";
    cout << greeting << "\n";
    }