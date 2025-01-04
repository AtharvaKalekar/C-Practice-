#include <iostream>
using namespace std;

template<class T>


void display(T a,T b){
    T result = a+b;
    cout <<"addition of "<<a <<" and "<<b <<" "<<result<<"\n";
}
int main (){
  display(1034,342);
  display(1231,1312);
    return 0;

}    