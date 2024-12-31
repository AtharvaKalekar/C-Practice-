#include<iostream>
#include <iomanip> 
using namespace std;

int main()
{
    string uname,pass;
    
    cout<<"Enter the username and password"<<endl;
    cin>>uname;
    cin>>pass;

    if(uname=="Bellingham" && pass=="HalaMadrid")
    {
        cout<<"login Success";
    
    }
    else
    {
        cout<<"login failed";

    }

}





