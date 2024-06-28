#include<iostream>
using namespace std;
class enroll
{
public:
    int Enr_no;
    void get_Enroll()
    {
        cout<<"Enter your Enroll number = ";
        cin>>Enr_no;
    }
};
class name : public enroll
{
public:
    string name;
    void get_name()
    {
        cout<<"Enter your name = ";
        cin>>name;
    }
};
class information:public name
{
public:
    float percentage;
    void get_percent()
    {
        cout<<"Enter your percentage = ";
        cin>>percentage;
    }
    void print()
    {
        cout<<endl<<"your enroll number is = "<<Enr_no;
        cout<<endl<<"your name is = "<<name;
        cout<<endl<<"your percentage is = "<<percentage;
    }
};
int main()
{
    information I1;
    I1.get_Enroll();
    I1.get_name();
    I1.get_percent();
    I1.print();
    return 0;
}
