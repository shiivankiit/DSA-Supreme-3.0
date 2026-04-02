// Type-Casting.
// Allows you to change the data-type of variable from one type to another.
// It's of two type-----Implicit type casting.-------Explicit type casting.

// Implicit type casting---Automatically cnvrts the type

#include<iostream>
using namespace std;

int main(){

     //int to float
     int num1=10;
     float num2=5.5;
     float result=num1+num2;
     cout<<result<<endl;

     //char to int
     //  char ch='A';
     //  int a = ch+1;
     //  cout<<a<<endl;

     //int to char
     int b=97;
     char ch=b;
     cout<<ch<<endl;

     return 0;
}

//Explicit type casting.--Allows you to explicitly specify the data type during an assignment or operator.

#include<iostream>
using namespace std;

int main(){
  int num1=10;
  int num2=5.5;
  float result = num1 +(int)num2;
  cout<<result<<endl;

  //doubel to int.
  double pi=3.1415927;
  int value=int(pi);
  cout<<value<<endl;

  //float to char
  float num=96.876;
  char ch=char(num);
  cout<<ch<<endl;

  return 0;
}
