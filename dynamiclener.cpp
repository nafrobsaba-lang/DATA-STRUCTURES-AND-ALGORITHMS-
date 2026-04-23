#include <iostream>
using namespace std;

int main() {
    int n, key;
    bool found = false;
    cout << "enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "enter the number to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "number " << key << " found at index " << i << "." << endl;
            found = true;
            break; 
        }
    }
    if (!found) {
        cout << "number " << key << " not found in the array." << endl;
    }

    return 0;
}