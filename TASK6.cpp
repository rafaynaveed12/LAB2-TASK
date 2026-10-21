#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[8], value;

    cout << "Enter 8 numbers: ";
    for (int i = 0; i < 8; i++)
        cin >> arr[i];

    selectionSort(arr, 8);

    cout << "Sorted: ";
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";

    cout << "\nEnter value to search: ";
    cin >> value;

    int index = binarySearch(arr, 8, value);

    if (index != -1)
        cout << value << " found at index " << index;
    else
        cout << value << " not found";

    return 0;
}