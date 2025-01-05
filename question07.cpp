//Take 20 integer inputs from user and print the following
//number of positive number
//number of negative numbers
//number of odd numbers
//number of even numbers
//number of 0s.
//Matrix Multiplication
//Matrix Transpose

#include <iostream>
#include <vector>
using namespace std;

void analyzeNumbers() {
    vector<int> numbers(20);
    int positive = 0, negative = 0, odd = 0, even = 0, zeros = 0;

    cout << "Enter 20 integers:\n";
    for (int i = 0; i < 20; i++) 
    {
        cin >> numbers[i];
        if (numbers[i] > 0) positive++;
        else if (numbers[i] < 0) negative++;
        else zeros++;

        if (numbers[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "\nResults:\n";
    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;
    cout << "Odd numbers: " << odd << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Zeros: " << zeros << endl;
}

void matrixMultiplication() 
{
    int rows1, cols1, rows2, cols2;

    cout << "\nEnter the dimensions of the first matrix (rows and columns): ";
    cin >> rows1 >> cols1;

    cout << "Enter the dimensions of the second matrix (rows and columns): ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) 
    {
        cout << "Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n";
        return;
    }

    vector<vector<int>matrix1(rows1, vector<int>(cols1));
    vector<vector<int>matrix2(rows2, vector<int>(cols2));
    vector<vector<int>result(rows1, vector<int>(cols2, 0));

    cout << "Enter elements of the first matrix:\n";
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            cin >>matrix1[i][j];

    cout << "Enter elements of the second matrix:\n";
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            cin >> matrix2[i][j];

    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            for (int k = 0; k < cols1; k++) 
            {
                result[i][j] +=
                matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void matrixTranspose() 
{
    int rows, cols;

    cout << "\nEnter the dimensions of the matrix (rows and columns): ";
    cin >> rows >> cols;

    vector<vector<int> matrix(rows, vector<int>(cols));
    vector<vector<int> transpose(cols, vector<int>(rows));

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTranspose of the Matrix:\n";
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    analyzeNumbers();

    matrixMultiplication();

    matrixTranspose();

    return 0;
}
