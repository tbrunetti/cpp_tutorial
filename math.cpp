#include <iostream>
#include <cmath>
using namespace std;

/* math functions
abs(x) absolute value of x
acos(x) arccosine of x
asin(x) arcsine of x
atan(x) arctangent of x
cbrt(x) cube root of x
ceil(x) value of x rounded up to the nearest integer
cos(x) cosine of x
cosh(x) hyperbolic cosine of x
exp(x) E^x
expm1(x) (e^x) -1
fabs(x) absolute value of a floating x
fdim(x,y) positive difference between x and y
floor(x) x rounded down to the nearest integer
hypot(x,y) returns sqrt(x^2 + y^2) without intermediate overflow or underflow
fma(x,y,z) x*y+z without losing precision
fmax(x,y) highest value of a floating x and y
fmin(x, y) lowest value of a floating x and y
fmod(x,y) floating remainder of x/y
pow(x,y)  x^y
sin(x) sine of x (x is in radians)
sinh(x) hyperbolic sine of a double value
tan(x) tangent of an angle
tanh(x) hyperbolic tangent of a double value
*/

int main() {
    cout << sqrt(64) << "\n";
    cout << round(2.6) << endl;
    cout << log(2) << "\n";
    int x = 5;
    int y = 10;
    cout << max(x,y) << "\n";
    return 0;
}

