#include<iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream my_file("abc.txt");
    
    //
    if(!my_file)
    {
        cout<<"Error: Unabke to open the file."<<endl;


    }

    //
    my_file<<"Hi Ameya"<<endl;
    my_file<<"Hi Rizzi"<<endl;
    my_file<<"All the best"<<endl;

    my_file.close();
}


 