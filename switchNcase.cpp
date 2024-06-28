#include<iostream>
using namespace std;
 int main(){
    char button;
    cout<<"Enter your value between a-d = ";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"A for Apple";
        break;
    case 'b':
        cout<<"B for Boy";
        break;
    case 'c':
       cout<<"C for Cat";
       break;
    case 'd':
       cout<<"D for Dog";

    default:
        cout<<"the value is not between a-d please try again";
        break;
    }
    return 0;
}
