#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &s,int top){
    //base
    if(s.empty()){
        s.push(top);
        return;
    }

    //recursive
    int ct=s.top();
    s.pop();
    InsertAtBottom(s,top);

    s.push(ct); //after the stack becomes empty it goes to base case and then top element is insetred and then this statement takes place

}
void ReverseStack(stack<int> &s){
    //base
    if(s.empty()){
        return;
    }

    //recursive
    int top=s.top();
    s.pop();
    ReverseStack(s);
    InsertAtBottom(s,top);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    ReverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    //if we try to print again we get empty stack as all elements are popped out
    //to avoid that we should make a funciton and passs stack as value and then print

return 0;
}