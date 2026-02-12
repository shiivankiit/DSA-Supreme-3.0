// Functions in c++
// A function is a way to group code into a singel unit.
// It can take inputs,process them,and return a result.
// Function helps in organising code,making it more redable and maintainable.

// Why we need function.
// Function reduce repetation,simplify complex task and help in debugging.
// They also make it eaiser to test individual parts of your program.

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int totalsum = a + b;
    return totalsum;
}
int multiply(int a, int b, int c)
{
    int finalvalue = a * b * c;
    return finalvalue;
}
void printMultiples(int num)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << num * i << endl;
    }
}
int main()
{
    int ans = sum(5, 6);
    cout << ans << endl;
    int ans2 = multiply(2, 3, 4);
    cout << ans2 << endl;
    printMultiples(5);
    return 0;
}