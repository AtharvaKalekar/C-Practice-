#include <iostream>
#include <stdexcept>

using namespace std;

void test(int x)
{
    try
    {
        if (x==0) throw x;//int

        else if(x==-1) throw 'x';//char

        else if (x==-1) throw 1.0;//double

    cout<<"end of try block\n";
    }
    catch(...)//catch all
    {
        cout<<"caught an execption\n";
    }

}
int main()
{
    cout<<"Testing generic catch\n";
    
    test(-1);

    
    test(0);

    
    test(1);

    
    
    return 0;

}