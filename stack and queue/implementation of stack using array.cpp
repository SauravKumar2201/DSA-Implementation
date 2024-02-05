#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout << "stack overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "stack underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(4);

    st.push(10);
    st.push(34);
    st.push(99);
    st.push(12);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    
    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}
