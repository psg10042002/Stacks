// next greater ele to right
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>vt1;
	vector<int>vt2;
	stack<int>st;
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		vt1.push_back(x);
	}
	st.push(vt1[n-1]);
	vt2.push_back(-1);
	for(int i=n-2;i>=0;i--){
		if(st.top()>vt1[i]){
			vt2.push_back(st.top());
			st.push(vt1[i]);
		}
		else{
			if(st.empty()){
				vt2.push_back(-1);
			}
			else{
				while(!st.empty() and st.top()<vt1[i]){
					st.pop();
				}
				if(st.empty()){
					vt2.push_back(-1);
				}
				else{
					vt2.push_back(st.top());
				}
			}
		}
	}
	reverse(vt2.begin(),vt2.end());
	for(auto i:vt2){
		cout<<i<<' ';
	}
}
