#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class StackUsingQueues {
private:
    queue<T> q1, q2;

public:
    // Function to push an element onto the stack
    void push(T val) {
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Push the new element onto q1
        q1.push(val);

        // Move all elements back from q2 to q1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow. Cannot pop from an empty stack." << endl;
            return;
        }

        // Pop the top element from q1
        q1.pop();
    }

    // Function to get the top element of the stack
    T top() const {
        if (isEmpty()) {
            cerr << "Stack is empty. Cannot get the top element." << endl;
            exit(EXIT_FAILURE);
        }

        // Return the front element of q1
        return q1.front();
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return q1.empty();
    }
};

int main() {
    // Example usage
    StackUsingQueues<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.top() << endl;

    myStack.pop();
    cout << "Top element after pop: " << myStack.top() << endl;

    return 0;
}
