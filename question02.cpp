///Write  program to reverse an array of integer values
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) 
{
    int start = 0;
    int end = n - 1;
    
    while (start < end) 
    {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

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

    
    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}