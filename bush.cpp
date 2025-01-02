#include<iostream>
using namespace std;

class Complex_no
{
    private:
    int r;
    int i;

    public:
    void getdata()
    {
        cout<<"enter the number";
        cin>>r>>i;
    }
    void putdata()
    {
        cout<<r<<"+i"<<i<<endl;
    }

    Complex_no operator +(Complex_no obj)
    {
        Complex_no ans;

        ans.r=r+obj.r;
        ans.i=i+obj.i;
        return ans;
    }

    

    

};

int main()
    {
       Complex_no C1,C2,C3;
       C1.getdata();
       C2.getdata();


       cout<<"\n-------------------------\n";
       C1.putdata();
       C2.putdata();

       cout<<"\n-------------------------\n";
       C3=C1+C2;
       C3.putdata();


    }
