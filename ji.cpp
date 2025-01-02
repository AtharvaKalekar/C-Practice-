#include<iostream>
using namespace std;

string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
    // Swap characters
    char temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
    }
    return str;
} 

int main()
{
    /*int j = 1;
    while (j <= 5) {
    cout << "While Loop: " << j << endl;
    j++;
    }


    for (int i = 1; i <= 4; i++) {
    cout << "For Loop: " << i << endl;
    }


    int k = 1;
    do {
    cout << "Do-While Loop: " << k << endl;
    k++;
    } while (k <= 10);
    */
     {
        string str;
        cout << "Enter a string: ";
        cin >> str;
        cout << "Reversed string: " << reverseString(str) << endl;
        return 0;
     }    
}