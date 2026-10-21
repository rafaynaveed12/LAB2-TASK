#include <iostream>
using namespace std;

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
    int arr[] = {12, 15, 18, 21, 25, 30, 34, 41};
    int age;

    cout << "Enter age to search: ";
    cin >> age;

    int index = binarySearch(arr, 8, age);

    if (index != -1)
        cout << age << " found at index " << index;
    else
        cout << age << " not found";

    return 0;
}
