// find largest element in array
#include <iostream>
using namespace std;
int main()
{
    int i, j, large = 0, row, col;
    cout << "Enter the number of rows in array: ";
    cin >> row;
    cout << "Enter the number of columns in array: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter the elements of array: ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < row; i++) for (j = 0; j < col; j++) if (arr[i][j] > large) large = arr[i][j]; // not using curly bracket because there is single line statement
    
    cout << "Largest element in array is: " << large << endl;
}