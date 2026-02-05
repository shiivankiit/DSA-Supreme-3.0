// Loops

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i = i + 1)
    {
        cout << "Bajrang.India" << endl;
    }
    // Counting from 1 to 5;
    for (int j = 1; j <= 5; j = j + 1)
    {
        cout << j << endl;
    }
    // Counting from 51 to 65;
    for (int k = 51; k <= 65; k = k + 1)
    {
        cout << k << endl;
    }
    // Break keyword
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    // Continue keyword
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
    // while-loop
    int i = 0;
    while (i <= 5)
    {
        cout << i << endl;
        i = i + 1;
    }
    // Do-while loop.
    do
    {
        cout << i << endl;
        i = i + 1;
    } while (i <= 5);
}