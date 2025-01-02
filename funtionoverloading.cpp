#include<iostream>
#include<math.h>
using namespace std;

int add(int a,int b)
    {
        return a+b;
    }
int add(int a,int b,int c)
    {
        return a+b+c;
    }
float add(float a,float b)
    {
        return a+b;
    }
int area(int a,int b)
    {
        return a*b;
    }
int perimeter(int l,int b)
    {
        return 2*(l+b);
    }
int cricle(int r)
    {
        return 3.14*(r*r);
    }
int tri(int a,int b,int c,int s)
    {
        s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));

    }            

int main()
{
    cout<<"Sum is :"<<add(6,7)<<endl;
    cout<<"Sum is :"<<add(6,7,7)<<endl;
    cout<<"Sum is :"<<add(6,7)<<endl;
    cout<<"Area is :"<<area(6,7)<<endl;
    cout<<"perimeter is :"<<perimeter(6,7)<<endl;
    cout<<"Area of circle is :"<<cricle(7)<<endl;
    cout<<"Area of triangle  is :"<<tri(50,20,34,1)<<endl;
}