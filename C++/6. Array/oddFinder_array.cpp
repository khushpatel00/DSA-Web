#include <iostream>
using namespace std;
int main() {
    int i,n;
    int oddCount = 0;
    cout<<"Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 1) {
            oddCount++;
        }
    }

    cout << "Number of Odd numbers: " << oddCount << endl;
    cout << "Odd numbers are: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
