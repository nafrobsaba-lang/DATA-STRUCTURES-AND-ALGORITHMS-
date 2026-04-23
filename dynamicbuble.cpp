#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the number you want to sort";
    cin >> n;
    int arr[n]; 
    cout << "enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nsorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}