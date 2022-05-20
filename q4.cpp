#include<iostream>
using namespace std;
int main(){
    int number,i;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    for ( i = 2; i < number; i++)
    {
        if(number%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
    }
    if(i==number){
        cout<<"prime number"<<endl;
        }
return 0;
}