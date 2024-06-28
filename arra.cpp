#include<iostream>
using namespace std;
int main(){
    int Arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){

        //cout<<Arr[i]<<endl;
        sum+=Arr[i];
        cout<<sum<<endl;

        }
    string Cars[5]={"tata","volvo","bmw","merchdis"};
    for(int i=0;i<5;i++){
        cout<<Cars[i]<<endl;
    }
    Cars[0]="hundai";
    for(int i=0;i<5;i++){
        cout<<Cars[i]<<endl;
    }

    return 0;
}
