#include<iostream>
using namespace std;

void GenerParenthesis(char* arr,int n,int i,int open,int close){
	if(i==2*n){
		arr[i]="\0";
		cout<<arr<<endl;
		return;
	}

	if(open<n){
		arr[i]="(";
		GenerParenthesis(arr,n,i+1,open+1,close);

	}
	if(open>close){
		arr[i]=")";
		GenerParenthesis(arr,n,i+1,open,close+1);
	}
}
int main() {
	int n;
	cin>>n;
	char arr;
	GenerParenthesis(arr,n,0,0,0);
	return 0;
}