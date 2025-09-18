#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nUnsorted array:\n";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "\nSorted array:\n";
    printArray(arr, n);

    return 0;
}