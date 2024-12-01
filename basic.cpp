#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Stack{
    private:
        vector <int> a;

    public:
    void pop(){
        a.pop_back();

    }
    int top(){
        return [a.size()-1];

    }
    void push(){
        a.push_back(val);

    }
    bool empty(){
        if(a.size()==0){
            return true;
        }
        return false;


    }


};
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(s.empty()!= true){
        cout<<s.top()<<" ";
        s.pop();
    }


return 0;
}