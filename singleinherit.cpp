#include<iostream>
using namespace std;

class stream
{
    string sname;
    string dept;

    public:
    void setstream(string s,string d)
    {
        sname=s;
        dept=d;

    }
    void getStream()
    {
        cout<<"Stream  :"<<sname<<endl;
        cout<<"Dept   :"<<dept<<endl;
    }
};

class student:public stream
{
    int roll;
    string sname;

    public:
    void setStudent(int r,string s)
    {
    roll=r;
    sname=s;

    }
    void getStudent()
    {
        cout<<"Roll no  :"<<roll<<endl;
        cout<<"Name  :"<<sname<<endl;
    }


};

int main()
{
    student s1;
    s1.setstream("BTECH","CSS");
    s1.setStudent(20,"Amit");

    s1.getStream();
    s1.getStudent();

}