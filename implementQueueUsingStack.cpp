#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {
        
    }
    
    
    void push(int x) {
        // Step 1: Transfer all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Step 2: Push the new element x into s1
        s1.push(x);

        // Step 3: Transfer all elements back from s2 to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    
    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }
    
    // Get the front element
    
    int peek() {
        return s1.top();
    }
    
    // Returns whether the queue is empty
    // Time Complexity: O(1)
    bool empty() {
        return s1.empty();
    }
};