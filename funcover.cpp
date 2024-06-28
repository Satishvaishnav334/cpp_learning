#include<iostream>
using namespace std;
class obj
{
public:
    void func(int x)
    {
        cout<<endl<<"value of x => "<<x;
    }
    void func(double x)
    {
        cout<<endl<<"value of x => "<<x;
    }
    void func(int x,int y)
    {
        cout<<endl<<"value of x and y is => "<<x<<","<<y;
    }
};
int main()
{
    obj s1;
    s1.func(7);
    s1.func(7.7);
    s1.func(7,6);
}
