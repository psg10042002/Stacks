// stock spanner
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>vt1;
	vector<int>vt2;
	stack<int>st;
	int n,x;
	cin>>n;
	for(int i=n-1;i>=0;i--){
		cin>>x;
		vt1.push_back(x);
	}
	for(int i=0;i<n;i++){
		while(!st.empty() and vt1[st.top()]<vt1[i]){
			st.pop();
		}
		if(st.empty()){
			vt2.push_back(i+1);
		}
		else{
			vt2.push_back(i-st.top());
		}
		st.push(i);
	}
	for(int i=0;i<n;i++){
		cout<<vt2[i]<<" ";
	}
}