#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "enter " << n << " elements in sorted order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nenter the number to search: ";
    cin >> key;
    int left = 0;
    int right = n - 1;
    bool found = false;
    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == key) {
            cout << "Array[" << mid << "] = " << arr[mid] << endl;
            found = true;
            break; 
        }
        if (arr[mid] < key) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    if (!found) {
        cout << "sorry number " << key << " not found in the array." << endl;
    }

    return 0;
}