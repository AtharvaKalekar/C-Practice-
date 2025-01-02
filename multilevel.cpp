#include<iostream>
using namespace std;

//Base  class -class A
class A
{
    private:
        int a;

    public:
        void get_a(int val_a)
        {
            a=val_a;
        }

        void put_a()
        {
            cout<<"value of a  :"<<a<<endl;
        }    
};

class B : public A
{
    private:
        int b;

    public:
        void get_b(int val_b)
        {
            b=val_b;
        }

        void put_b()
        {
            cout<<"value of b  :"<<b<<endl;
        }    
};

class C : public B
{
    private:
        int c;

    public:
        void get_c(int val_c)
        {
            c=val_c;
        }

        void put_c()
        {
            cout<<"value of c  :"<<c<<endl;
        }    
};




int main()
{
    //create objeect of final
     C objC;
    objC.get_c(100);
    objC.get_b(200);
    objC.get_c(300);
    


    //print all values using final::printValues()
    objC.put_a();
    objC.put_b();
    objC.put_c();
    
}