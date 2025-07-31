#include <iostream>
using namespace std;

class Sort {
public:
    int n, temp, arr[10];

    void arrayInput() {
        cout << "Enter the number of elements (max 10): ";
        cin >> n;

        if (n > 10 || n < 1) {
            cout << "Invalid input! Please enter between 1 and 10.\n";
            return;
        }

        cout << "Enter Elements:\n";
        for (int i = 0; i < n; i++) {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }
        printArray();
    }

    void printArray() {
        cout << "\nArray:\n";
        for (int i = 0; i < n; i++) {
            cout << "  arr[" << i << "] = " << arr[i] << "\n";
        }
    }

    void selectionSort() {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
        cout << "\nSorted array using Selection Sort:\n";
        printArray();
    }

    void mergeSort(int arr[], int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    void merge(int arr[], int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        int L[10], R[10]; // max 10 element support
        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
            }
        }
        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];
    }

    void linearSearch() {
        int key;
        cout << "Enter element to search: ";
        cin >> key;

        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << "Element found at index " << i << "\n";
                return;
            }
        }
        cout << "Element not found\n";
    }

    void binarySearch() {
        int key;
        cout << "Enter element to search: ";
        cin >> key;

        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == key) {
                cout << "Element found at index " << mid << "\n";
                return;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << "Element not found\n";
    }
};

int main() {
    Sort sort;
    int action;
    char confirmation;

    do {
        cout<<"1. Enter Array\n2. Selection Sort\n3. Merge Sort\n4. Linear Search\n5. Binary Search\n0. Exit\nEnter your choice: ";
        cin >> action;

        switch (action) {
            case 1:
                sort.arrayInput();
                break;
            case 2:
                sort.selectionSort();
                break;
            case 3:
                sort.mergeSort(sort.arr, 0, sort.n - 1);
                cout << "\nSorted array using Merge Sort:\n";
                sort.printArray();
                break;
            case 4:
                sort.linearSearch();
                break;
            case 5:
                cout << "Binary Search requires sorted array.\n";
                cout << "Is your array already sorted? (Y/N): ";
                cin >> confirmation;
                if ((confirmation == 'Y') || (confirmation == 'y')) {
                    sort.binarySearch();
                } else {
                    sort.selectionSort(); 
                    sort.binarySearch();
                }
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (action != 0);

    return 0;
}
