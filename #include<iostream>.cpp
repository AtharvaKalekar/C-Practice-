#include<iostream>
#include <iomanip>

using namespace std;
int main()
{

    cout<<"Hello";
    cout<<setw(10)<<"I";

    int a,b;
    cout<<"Enter any 2 numbers";
    cin>>a>>b;

    a>b ? cout<<"A is greater" : cout<<"B is greater";
}