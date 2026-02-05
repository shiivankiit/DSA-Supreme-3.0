// Control-flow in c++

#include <iostream>
using namespace std;

int main()
{
    // Decision Making
    int budget;
    cout << "Enter your budget" << endl;
    // input
    cin >> budget;
    // condition
    if (budget > 200000)
    {
        cout << "You can buy scorpio" << endl;
    }
    else
    {
        cout << "You can not buy scorpio" << endl;
    }
    // if-else-if block

    // if (condition1) {
    //     // code runs if condition1 is true
    // } else if (condition2) {
    //     // runs if condition1 is false and condition2 is true
    // } else if (condition3) {
    //     // runs if above are false and this is true
    // } else {
    //     // runs if none of the conditions are true
    // }

    int marks = 60;
    if (marks > 90)
    {
        cout << "A" << endl;
    }
    else if (marks > 80)
    {
        cout << "B";
    }
    else if (marks > 70)
    {
        cout << "C";
    }
    else if (marks > 60)
    {
        cout << "D";
    }
    else
    {
        cout << "Fail" << endl;
    }

    // Nested if
    int height;
    cout << "Enter your height" << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight" << endl;
    cin >> weight;

    if (height > 5)
    {
        if (weight > 80)
        {
            cout << "Your bmi is good" << endl;
        }
        else
        {
            cout << "Take a diet and do exrecise" << endl;
        }
    }
    else
    {
        cout << "Complain le lo" << endl;
    }
    return 0;
}