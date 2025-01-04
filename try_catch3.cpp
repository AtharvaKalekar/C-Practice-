#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    try
    {
        int numerator=10;
        int denominator=20;
        int res;
        if (denominator ==0)
        {
            throw runtime_error("division by zero not allowed!");
        }

        res=numerator/denominator;
        cout<<"result after division:"<<res<<endl;
    }
    catch(const exception& e)
    {
        cout<<"exception"<<e.what()<<endl;
    }
    return 0;
}
