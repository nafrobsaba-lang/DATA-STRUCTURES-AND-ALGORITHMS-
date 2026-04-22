#include <iostream> 
using namespace std; 
 
class Student { 
public: 
    string name; 
    int age; 
 
    void display() { 
        cout << "Name: " << name << "\nAge: " << age << endl; 
    } 
};  
struct Point { 
    int x, y; 
}; 
 
int main() { 
    Student s; 
    s.name = "Abel"; 
    s.age = 20; 
    s.display(); 
 
    Point p = {10, 15}; 
    cout << "Point(" << p.x << ", " << p.y << ")" << endl; 
 
    int value = 50; 
    int *ptr = &value; 
 
    cout << "Value = " << value << endl; 
    cout << "Address = " << ptr << endl; 
    cout << "Pointer Dereference = " << *ptr << endl; 
 
    return 0; 
} 
 