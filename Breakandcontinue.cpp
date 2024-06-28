#include<iostream>
using namespace std;
//       break
int main(){
  int a,b;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    int num;
    for(num=2;num<i;num++){
        if(i%num==0){

            break;
        }
    }
    if(num==i){
        cout<<"-"<<i<<endl;
    }
  }

  //continue
  for(int i=0;i<=100;i++){
    if(i%3==0){
        continue;
    }
    cout<<i<<endl;
  }
  return 0;
}
