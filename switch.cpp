#include<iostream>
using namespace std;

int main()
{
    char alpha;

    cout<<"Enter the Alphabet";
    cin>>alpha;

    switch(alpha)
    {
        case 'a':
            cout<<"Vowel";
        break;   

        case 'e':
            cout<<"Vowel";
        break;

        case 'i':
            cout<<"Vowel";
        break;

        case 'o':
            cout<<"Vowel";
        break;

        case 'u':
            cout<<"Vowel";
        break;

        default:
            cout<<"Consonants";
        break;

    
    }
}