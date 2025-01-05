///Write  program to find the number of even and odd integers in a given array of integers.
#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            evenCount++;
        } else 

        {
            oddCount++;
        }
    }

    cout << "Number of even integers: " << evenCount << endl;
    cout << "Number of odd integers: " << oddCount << endl;

    return 0;
}