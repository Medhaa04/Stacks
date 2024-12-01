#include<iostream>
using namespace std;
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    
    //constructor
    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is full"<<endl;
        }
    }

    void pop(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        }
        else{
            top--;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Invalid stack"<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }

    }



};

int main(){
    Stack s1(5);
    s1.push(23);
    s1.push(24);
    s1.push(25);
    s1.push(26);
    s1.push(27);
    s1.push(28);

    s1.isEmpty();
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.peek()<<endl;
    s1.isEmpty();
    
    return 0;
}