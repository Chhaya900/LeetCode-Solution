class MyQueue {
public:
    MyQueue() {
        
    }
    list<int> res;
    void push(int x) {
        res.push_back(x);
    }
    
    int pop() {
        int val = res.front();
        res.pop_front();
        return val;
    }
    
    int peek() {
        return res.front();
    }
    
    bool empty() {
        if(res.empty())
            return true;
        return false;
    }
};