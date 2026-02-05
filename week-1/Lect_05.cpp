// Switch Case.

#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter your grade" << endl;
    cin >> grade;

    // if(grade=='A'){
    //    cout <<"Marks between 90 to 100"<<endl;
    // }
    // else if(grade=='B'){
    //     cout << "Marks between 80 to 90"<<endl;
    // }
    // else if(grade=='C'){
    //     cout << "Marks between 70 to 80"<<endl;
    // }
    // else if(grade =='D'){
    //     cout<<"Marks between 60 to 70"<<endl;
    // } else {
    //     cout <<"Marks between 0 to 50"<<endl;
    // }
    // return 0;

    // Converting the above code into the switch case statement.
    switch (grade)
    {
    case 'A':
        cout << "Marks between 90 to 100" << endl;
        break;
    case 'B':
        cout << "Marks between 70 to 80" << endl;
        break;
    case 'C':
        cout << "Marks between 60 to 70" << endl;
        break;
    case 'D':
        cout << "Marks between 50 to 60" << endl;
        break;
    default:
        cout << "Your marks range between 0 to 60" << endl;
    }
}
