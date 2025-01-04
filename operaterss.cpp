
#include<iostream>
using namespace std;

class Number
{
    private:
    int x;
    int y;

    public:
    void getdata()
    {
        cout<<"enter the number";
        cin>>x>>y;
    }
    void putdata()
    {
        cout<<x<<"+i"<<y<<endl;
    }
    
    Number operator ++()
    {
        x++;
        y++;
    }
    
};

int main()
    {
       Number O1;
       O1.getdata();
       


       cout<<"\n Complex number W/O increment =";
       O1.putdata();

       ++O1;
       

       cout<<"\nComplex Numbe W Increment  =";
       O1.putdata();




    }
