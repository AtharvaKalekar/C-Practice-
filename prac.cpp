#include <iostream>
#include <string>
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