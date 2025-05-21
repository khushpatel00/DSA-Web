#include <iostream>
using namespace std;
int main()
{
    int i, large = 0, n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    cout << "Largest element in array is: " << large << endl;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == large)
            arr[i] = 0; // for removing 1st largest element
    }
    for (i = 0, large = 0; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    cout << "2nd Largest element in array is: " << large << endl;
}