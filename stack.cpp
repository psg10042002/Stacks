#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
	stack<int>st;
	int a,n;
	cin>>n;
	//creating stack
	for(int i=0;i<n;i++){
		cin>>a;
		st.emplace(a);

	}	
	while(!st.empty())
	{
		cout<<" "<<st.top();
		st.pop();
	}
	cout<<endl;
	cout<<(bool)st.empty()<<endl;
	cout<<peek();

}