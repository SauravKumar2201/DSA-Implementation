class Stack {
public:
    vector<int> arr;

    void push(int element) {
        arr.push_back(element);
    }

    void pop() {
        if (!isEmpty()) {
            arr.pop_back();
        } else {
            cout << "stack underflow" << endl;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return arr.back();
        } else {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return arr.empty();
    }
};
