// next greater ele to right
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
	//st.push(vt1[n-1]);
	//cout<<vt1[n-1];
	//vt2.push_back(-1);
	for(int i=n-1;i>=0;i--){

		while(!st.empty() and st.top()<vt1[i]){
			st.pop();
			//cout<<st.top();
		}
		if(st.empty()){
			vt2.push_back(-1);
			st.push(vt1[i]);
			//cout<<st.top();
		}
		else{
			vt2.push_back(st.top());
			st.push(vt1[i]);
			//cout<<st.top();
		}
			
		
	}
	reverse(vt2.begin(),vt2.end());
	for(auto i:vt2){
		cout<<i<<' ';
	}
}
