#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int top){
    //base
    if(s.empty()){
        s.push(top);
        return;
    }
    //recursive
    int ct=s.top();
    s.pop();
    insertAtBottom(s,top);

    s.push(ct);
}

void reverse(stack<int> &s){
    //base
    if(s.empty()){
        return;
    }
    //recur
    int top=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,top);
}


int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


}