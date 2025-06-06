#include <iostream>
using namespace std;
int main()
{
    int i, n, evenCount = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) if (arr[i] % 2 == 0) evenCount++;
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Even numbers are: ";
    for (int i = 0; i < n; i++) if (arr[i] % 2 == 0) cout << arr[i] << " ";
    return 0;
}