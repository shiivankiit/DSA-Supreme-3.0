//Do-while-loop

#include<iostream>
using namespace std;

int main(){
    // for(int i=0;i<=5;i++){
    //     cout << i <<endl ; 
    // }
    //converting the above loop into do-while loop
    // int i=1;
    // do{
    //     //logic
    //     cout<<i<<" ";
    //     //updation
    //     i=i+1;
    // }while (i<=5);

    //Nested Loop
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            cout << i << " "<< j <<endl;
        }
    }
    
    return 0;
}