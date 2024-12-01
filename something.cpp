#include<iostream>
using namespace std;

void generate_parentheesis(char *arr,int n,int i,int open,int close){
    //base
    if(i==2*n){
        arr[i]='\0';
        cout<<arr<<endl;
        return;
    }
    //recursive
    if(open<n){
        arr[i]='(';
        generate_parentheesis(arr,n,i+1,open+1,close);
    }
    if(open>close){
        arr[i]=')';
        generate_parentheesis(arr,n,i+1,open,close+1);
    }
}
int main(){
    int n=2;
    char arr;
    generate_parentheesis(arr,n,0,0,0);



return 0;
}