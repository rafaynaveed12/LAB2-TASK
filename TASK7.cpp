#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {90, 75, 60, 45, 30, 15};

    int index = binarySearch(arr, 6, 45);

    if (index != -1)
        cout << "45 found at index " << index << endl;
    else
        cout << "45 not found" << endl;

    index = binarySearch(arr, 6, 50);

    if (index != -1)
        cout << "50 found at index " << index;
    else
        cout << "50 not found";

    return 0;
}