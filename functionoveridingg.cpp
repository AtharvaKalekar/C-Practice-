#include <iostream>
using namespace std;

class number
{
    protected:
          int n;
    public:
        void getdata(int x)
        {
            cout<<"Enter a number " ;
            n=x;

        }

        void display()
        {
            cout<<n;
        }
        
};

class sq:public number
{
    public:
        void getdata(int y)
        {
            cout<<"derived class \n";
            number::getdata(y);

        }
        void display()
        {
            cout<<"square ="<<n*n;

        }
};
int main()
{
    sq no;

    no.getdata(5);
    no.display();
}