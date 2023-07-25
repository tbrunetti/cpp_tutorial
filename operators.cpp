#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 100 + 50;
    int sum1 = 100 + 50; // 150
    int sum2 = sum1 + 250; // 400 (150 +20)
    int sum3 = sum2 + sum2; // 800 (400 + 400)

    /* arithmetic operators
    + is additions ex: x+y
    - is substraction ex: x -y
    * is multiplication ex: x*y
    / is division ex: x/y
    % is modulus (remainder) ex: x%y
    ++ is incredemnt ex: ++x
    -- is decrement ex: --x
    */

    // exercises
    cout << 10 * 5 << endl; 
    cout << 10 / 5 << "\n";
    cout << x++ << "\n"; // prints value of x prior to increment
    cout << ++x << "\n"; // prints value of x after increment; note this will be 2 larger than what inital x initiation was since we incremented x in the prior line and then incremented again on this line prior to print



    /* assignment operators
    x+=3 is same x = x + 3
    x-=3 is same as x = x - 3
    x*=3 is same as x = x * 3
    x/=3 is same as x = x / 3
    x%=3 is same as x = x % 3
    x&=3 is same as x = x & 3
    x|=3 is same as x = x | 3
    x^=3 is same as x = x ^ 3
    x>>=3 is same as x = x >> 3
    x<<=3 is same as x = x << 3
    */

    //increment the value of x by 10
    x+=10;
    cout << x << endl;
    // cout << x+=10 << endl; this won't work -- cannot use << with assignment operators

    /* comparison operators -- return booleans
    == equal to ex: x == y
    != not equal ex: x != y 
    > greater than ex: x > y
    < less than ex: x < y
    >= greater than or equal to ex: x >= y
    <= less than or equal to exL x <= y
    */

    int big = 10;
    int small = 5;
    cout << (big > small) << "\n";

    /* logical operators
    && logical and; returns true if both statements are true, ex: x < 5 && x < 10
    || logical or; returns true if one of the statements is true, ex: x < 5 || x < 4
    ! logical not; reverse the result, returns false if the result is true, ex: !(x < 5 && x < 10)
    */

   cout << (big < 20 && small > 2) << "\n"; // returns true
   cout << !(big < 20 && small > 2) << "\n"; // returns false

}