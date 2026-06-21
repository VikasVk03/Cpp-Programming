/*
* math lib function: https://labex.io/tutorials/cpp-how-to-use-standard-library-math-operations-435856


Standard Math Header Files
C++ offers multiple header files for mathematical operations:

Header	   | Description	                    |         Key Functions
<cmath>	   | Standard mathematical functions	|    sin(), cos(), sqrt(), pow()
<complex>  | Complex number operations	        |   complex, real(), imag()
<numeric>  | Numeric algorithms	                |   accumulate(), inner_product()


  *  Core Mathematical Functions
        - Trigonometric
        - Exponential
        - Logarithmic
        - Rounding
*/

/*
How sqrt() Works "Behind the Scenes"
The internal implementation of sqrt typically depends on the underlying hardware and compiler:

-  Hardware Acceleration: On modern processors (like Intel/AMD), sqrt is often mapped directly to a specific CPU instruction (e.g., FSQRT or SQRTSD in x86/x64). This is extremely fast because it is handled by the hardware's Floating Point Unit (FPU).

-   Newton-Raphson Method: For software-based implementations or to refine hardware results, compilers often use the Newton-Raphson method (also known as the Babylonian method). It starts with an initial guess and repeatedly refines it using the formula. https://www.geeksforgeeks.org/maths/root-finding-algorithm/

-   Precision: Per the IEEE 754 standard, std::sqrt is required to be "correctly rounded," meaning it must provide the closest representable floating-point number to the infinitely precise square root.

Handling Special Cases & Errors
-    Negative Numbers: Passing a negative value causes a "domain error" and returns NaN (Not a Number) because square roots of negative numbers are not defined for real floating-point types.
-   Infinity: The square root of positive infinity is positive infinity.
-   Zero: The square root of 0 is exactly 0

*/

// * Basic Mathematical Constant
/*
#include <iostream>
#include <cmath>

// Mathematical constants
double pi = M_1_PI;
double e = M_E;

int main()
{
    // Square root
    double result = sqrt(16.0);


    // Power Calculation
    double power = pow(2, 3); // Returns 8.0

    // Trigonometric Functions
    double angle = M_PI / 4;
    double sine = sin(angle); // calculates in radian
    double cosine = cos(angle);

    std::cout << "Square root result: 16.0 " << result << std::endl;

    std::cout << "Power Calculation: pow(2,3) " << power << std::endl;

    std::cout << "Trigonometric Functions \n\n"
              << "angle " << angle
              << "\n sine " << sine << "\n cosine " << cosine << std::endl;

    return 0;
}
 */

// * Trigonometric functions

#include <cmath>

double angle = M_PI / 4;
double sine = sin(angle);
double cosine = cos(angle);
double tangent = tan(angle);

// * Exponential and Logarithmic Functions

/* #include <iostream>
#include <cmath>

int main()
{
    double base = 2.0;
    double exponent = 3.0;

    // Exponential calculation

    double exponential = exp(base);     // e^base
    double power = pow(base, exponent); // base^exponent
    double naturalLog = log(base);      // ln(base)
    double base10Log = log10(base);     // Log10(base)

    std::cout << "Exponential = " << exponential << std::endl;
    std::cout << "Power = " << power << std::endl;
    std::cout << "Natural Log = " << naturalLog << std::endl;
    std::cout << "Base 10 Log = " << base10Log << std::endl;

    return 0;
} */

// * Rounding and Absolute Value Functions

/*
Function   | Description	  |   Example
ceil()	   | Round up	      |  ceil(4.2) = 5.0
floor()	   | Round down	      |  floor(4.8) = 4.0
round()	   | Nearest integer  |  round(4.5) = 5.0
abs()	   | Absolute value	  |   abs(-5) = 5

*/

/* #include <iostream>
#include <cmath>

int main()
{
    double ceilValue = ceil(6.1);
    double floorValue = floor(6.9);
    double roundValue = round(4.5);

    double absValue = abs(-5)
}
 */

// * Advanced Mathematical Operations

/* #include <cmath>

int main()
{
    // Square root
    double squareRoot = sqrt(16.0);

    // Hyperbolic function
    double hyperSine = sinh(1.0);
    double hyperCosine = cosh(1.0);

    // Inverse trigonometric function
    double arcSine = asin(0.5);
    double arcCosine = acos(0.5);

    return 0;
}
 */
