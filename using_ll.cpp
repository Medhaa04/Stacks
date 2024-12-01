#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};
class Stack{
    private:
    node* head;

    public:
    Stack(){
        head=NULL;

    }
    void pop(){
        //delete from front
        if(head==NULL){
            return;
        }
        else if(head ->next ==NULL){
            head=NULL;
        }
        else{
            node *temp=head;
            head = head -> next;
            delete temp;
        }

    }
    int top(){
        //head element
        return head ->data;

    }
    void push(int val){
        //insert at beginning
        node* newnode=new node(val);
        
        if(head==NULL){
            head=newnode;
        }
        else{
            
        newnode->next=head;
        head=newnode;
        }


    }
    bool empty(){
        //if head null return true
        return head =nullptr;

    }
};
int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    cout<<s1.top()<<endl;
    s1.pop();
    s1.empty();



}
