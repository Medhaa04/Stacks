#include <bits/stdc++.h> 
#include<stack>
using namespace std;
void InsertSorted(stack<int>&stack,int num){
    //base
    if(stack.empty()|| !stack.empty() && stack.top()<num){      //is stack is empty|| stack is not emoty and topelement is less the the element to be inserted
        stack.push(num);
        return;
    }
    //recur
    int n=stack.top();                  
    stack.pop();
    InsertSorted(stack,num);         //recursive call for rest of stack and then insert n on top
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
    //base
    if(stack.empty()){        //if stack is empty
        return;
    }
    int num=stack.top();
    stack.pop();
    InsertSorted(stack,num);           //sort the stack and then insert num
	
}