//next greater to left
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>vt1;
	vector<int>vt2;
	stack<int>st;
	
	int n,x;
	cin>>n;
	for(int i=n;i>0;i--){
		cin>>x;

		vt1.push_back(x);
		//cout<<x<<" ";
		
	}
	for(int i=0;i<n;i++){
		//cout<<i;
		while(!st.empty() and st.top()<= vt1[i])
		{
			st.pop();

		}
		if(st.empty())
		{
			vt2.push_back(-1);
		}
		else{
			vt2.push_back(st.top());
		}
		st.push(vt1[i]);
	}
	for(auto i:vt2){
		cout<<i<<" ";
	}

}