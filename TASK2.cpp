#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, high, key);
    else
        return binarySearch(arr, low, mid - 1, key);
}

int main() {
    int arr[] = {50, 120, 175, 240, 300, 450, 620};
    int price;

    cout << "Enter price to search: ";
    cin >> price;

    int index = binarySearch(arr, 0, 6, price);

    if (index != -1)
        cout << price << " found at index " << index;
    else
        cout << price << " not found";

    return 0;
}