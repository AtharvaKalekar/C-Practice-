#include<iostream>
using namespace std;

class stream
{
    protected:
    string stname;
    string dept;

    
};

class student:public stream
{
    int roll;
    string sname;

    public:
    void setStudent(string st,string d,int r,string s)
    {
        stname=st;
        dept=d;
        roll=r;
        sname=s;


    }
    
    void getStudent()
    {
        cout<<"Stream  :"<<stname<<endl;
        cout<<"Dept  :"<<dept<<endl;
        cout<<"Roll no  :"<<roll<<endl;
        cout<<"Name  :"<<sname<<endl;
    }


};
 
int main()
{
    student s1;
    s1.setStudent("BTECH","CSS",101,"Amit");
    
    cout<<"\n Student details"<<endl;
    
    s1.getStudent();

}
