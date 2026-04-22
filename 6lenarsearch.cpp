#include <iostream>
using namespace std;

int main() {
    int n, key;
    bool found = false;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value to find: ";
    cin >> key;


    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i << endl;
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Not Found" << endl;
    }

    return 0;
} 
