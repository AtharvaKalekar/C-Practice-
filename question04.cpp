///Write  program to test if an array contains a specific value & the index of that array element
#include <iostream>
using namespace std;

int main() 
{
    int n, value, index = -1;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Enter the value to search for: ";
    cin >> value;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == value) 
        {
            index = i; 
            break; 
        }
    }

    
    if (index != -1) 
    {
        cout << "Value " << value << " found at index: " << index << endl;
    } else {
        cout << "Value " << value << " not found in the array." << endl;
    }

    return 0;
}