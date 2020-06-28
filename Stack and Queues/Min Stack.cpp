https://www.interviewbit.com/problems/min-stack/

stack<int> s;
stack<int> mini;

MinStack::MinStack() {
    while (!s.empty()) s.pop();
    while (!mini.empty()) mini.pop();
}

void MinStack::push(int x) {
    s.push(x);
    if (mini.size() == 0) mini.push(x);
    else {
        if (x < mini.top()) mini.push(x);
        else mini.push(mini.top());
    }
}

void MinStack::pop() {
    if (!s.empty()) {
        s.pop();
        mini.pop();
    }
}

int MinStack::top() {
    if (s.empty()) return -1;
    return s.top();
}

int MinStack::getMin() {
    if (mini.empty()) return -1;
    return mini.top();
}
