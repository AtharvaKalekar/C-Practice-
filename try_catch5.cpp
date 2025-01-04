#include <iostream>
#include <stdexcept>

using namespace std;

void test(int x)
{
    try
    {
        if (x==1) throw x;//int

        else if(x==0) throw 'x';//char

        else if (x==-1) throw 1.0;//double

    cout<<"end of try block\n";
    }
    catch(char c)//char c
    {
        cout<<"caught an character\n";
    }
    catch(int m)//int m
    {
        cout<<"caught an integer\n";
    }
    catch(double d)//double d
    {
        cout<<"caught an double \n";

    }
cout<<"end of try-catch system\n\n";
}
int main()
{
    cout<<"Testing multiple catches\n";
    cout<<"x== 1\n";
    test(1);

    cout<<"x== 0\n";
    test(0);

    cout<<"x== -1\n";
    test(-1);

    cout<<"x== 2\n";
    test(2);
    
    return 0;

}