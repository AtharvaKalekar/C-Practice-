//syntax
/*template<class>
class classname
{
...
//class member specification
//with anonymous type t
//whenever appropriate
...
...

template<class T>
class vector
{
T*v;   //type T vector
};
*/
#include<iostream>
using namespace std;

template<class T1>
class Test
{
T1 a;
public:
Test(T1 x)
{
    a=x;
}
void show()
{
    cout<<a<<"\n";
}
};
int main()
{
Test<float>test1(1.23F) ;
Test<float>test2(100);   

test1.show();
test2.show();
}