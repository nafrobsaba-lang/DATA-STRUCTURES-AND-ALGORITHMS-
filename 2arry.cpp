#include <iostream> 
#include <string> 
using namespace std; 
 
int main() { 
    int arr[5] = {10, 20, 30, 40, 50}; 
 
    cout << "Array Elements: "; 
    for (int i = 0; i < 5; i++) { 
        cout << arr[i] << " "; 
    } 
 
    cout << "\n"; 
 
    string text = "Data Structures"; 
    cout << "String: " << text << endl; 
 
    cout << "Length: " << text.length() << endl; 
 
    text.append(" Lab"); 
    cout << "Updated String: " << text << endl; 
 
    return 0; 
} 
 
