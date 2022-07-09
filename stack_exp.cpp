#include<bits/stdc++.h>
#include<stack>
using namespace std;
struct mystack{
	int *arr;
	int c;
	int top;
	mystack(int c){
		arr=new int[c];
		int capacity=c;
		top=-1;
	}
	void push(int x){
		if(top==c-1){
			cout<<"stack is filled";
			return;
		}
		top++;
		arr[top]=x;
	}
	int pop(){
		if (top==-1){
			return INT_MIN;
		}
		return arr[top];
		top-=1;
	}
	int peek(){
		if(top==-1) return INT_MIN;
		return arr[top];

	}
	bool empty(){
		if (top==-1 )return true;
		return false;
	}
};
int main(){
	mystack st(5);
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	cout<<st.pop()<<endl;
	cout<<st.empty()<<endl;
	cout<<st.peek()<<endl;

}