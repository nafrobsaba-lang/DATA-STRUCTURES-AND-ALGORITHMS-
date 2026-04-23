#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> arr[i];
    }
    // insertion sort algorithm
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;   
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--; 
        }

        arr[j + 1] = key;
    }
    cout << "\nsorted array:5 ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}