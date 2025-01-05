///Write  program to copy an array by reversing the array
#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int original[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> original[i];
    }

    int reversed[n];

    for (int i = 0; i < n; i++) 
    {
        reversed[i] = original[n - 1 - i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << original[i] << " ";
    }
    cout << endl;

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << reversed[i] << " ";
    }
    cout << endl;

    return 0;
}