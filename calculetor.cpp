#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    char op;
    cout<<"Enter two number = ";
    cin>>n1>>n2;
    cout<<"Enter your operator = ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1 + n2;
        break;
    case '-':
        cout<<n1 - n2;
        break;
    case '*':
        cout<<n1 * n2;
        break;
    case '/':
        cout<<n1 / n2;
        break;

    default:
    cout<<"Enter other oprator";
        break;
    }
    return 0;
}
