#include <iostream> 
#include <deque> 
using namespace std;
int main() { 
    deque<int> dq; 
 
    dq.push_front(10); 
    dq.push_back(20); 
    dq.push_front(5); 
 
    for (int value : dq) 
        cout << value << " "; 
 
 
    return 0; 
} 
Priority Queue 
#include <iostream> 
#include <queue> 
using namespace std; 
 
int main() { 
    priority_queue<int> pq; 
 
    pq.push(30); 
    pq.push(10); 
    pq.push(50); 
 
    while (!pq.empty()) { 
        cout << pq.top() << " "; 
        pq.pop(); 
    } 
 
    return 0; 
}