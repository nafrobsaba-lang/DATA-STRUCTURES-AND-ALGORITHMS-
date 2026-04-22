#include <iostream> 
using namespace std; 
 
int main() { 
    int arr[] = {10, 20, 30, 40, 50}; 
    int key = 40; 
    int left = 0, right = 4; 
 
    while (left <= right) { 
        int mid = (left + right) / 2; 
 
        if (arr[mid] == key) { 
            cout << "Found at index " << mid << endl; 
            return 0; 
        } 
 
        if (arr[mid] < key) 
            left = mid + 1; 
        else 
            right = mid - 1; 
    } 
 
    cout << "Not Found" << endl; 
    return 0; 
} 