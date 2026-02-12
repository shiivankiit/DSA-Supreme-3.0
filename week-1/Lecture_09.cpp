// Operators in C++
// An Operator is a symbol that operates on a value to
// perform specific mathematical or logical computation
// They form the foundation of any programming language
#include <iostream>
using namespace std;

int main()
{
    // Unary opeerator.
    int a = 5;
    cout << a << endl;
    a++;
    cout << a << endl;
    ++a;
    cout << a << endl;
    --a;
    cout << a << endl;
    a--;
    cout << a << endl;

    // Binary Operators.

    // Arithmetic operator.(+,-,*,/,%)
    int b = 5;
    int c = 8;
    int sum = b + c;
    cout << "sum of b ans c is " << sum << endl;
    int subtract = b - c;
    cout << "subtarct of b and c is " << subtract << endl;
    int multiply = b * c;
    cout << "multiply of b and c is " << multiply << endl;
    int divide = b / c;
    cout << "Quotient of b and c is " << divide << endl;
    int moduls = b % c;
    cout << "Remainder of b and c is " << moduls << endl;

    // Relational Operator
    cout << (5 > 8) << endl;
    cout << (5 < 8) << endl;
    cout << (8 >= 5) << endl;
    cout << (8 <= 5) << endl;
    cout << (5 == 5) << endl;
    cout << (5 != 4) << endl;

    // Logical operator
    // and---if all of them are true then you get the true otherwise you get the false value.
    bool cond1 = true;
    bool cond2 = true;
    bool cond3 = false;

    if (cond1 && cond2 && cond3)
    {
        cout << "All condtion are true" << endl;
    }
    else
    {
        cout << "All condtion are not true" << endl;
    }
    // or(||) if any condition is true then it will geave you a true value.
    // if all are flase then you get the flase value.
    bool cond5 = (10 > 5);
    bool cond6 = (5 >= 5);
    bool cond7 = (2 == 2);
    if (cond5 || cond6 || cond7)
    {
        cout << "all condtion are true" << endl;
    }
    else
    {
        cout << "all condition are not true" << endl;
    }

    // not operator (!)
    // if true then false.
    // if false then true.
    bool condition = false;
    cout << !condition << endl;

    // Assignment operator(=,+=,-=,*=,/=,%=)
    int arr = 5;
    cout << arr << endl;
    arr = arr + 10;
    arr += 10;
    arr = arr - 5;
    arr -= 5;
    arr = arr * 10;
    arr *= 10;
    arr = arr / 10;
    arr /= 10;
    arr = arr % 10;
    arr %= 10;

    // Bitwise operator.(and,or,not,left shift,right shift)
    cout << (5 & 4) << endl;
    cout << (5 | 4) << endl;
    cout << (~1) << endl;
    cout << (5 << 2) << endl;
    cout << (10 >> 3) << endl;
    cout << (10 ^ 5) << endl;

    return 0;
}