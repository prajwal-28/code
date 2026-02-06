class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {
        
    }
    
    void push(int x) {
        // Step 1: Move all elements from q1 to q2
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Step 2: Push the new element x into q1
        q1.push(x);
        
        // Step 3: Move all elements back from q2 to q1
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        // Since the top element is always at the front of q1
        int val = q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};