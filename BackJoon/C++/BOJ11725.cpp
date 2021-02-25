#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,u,v;
	cin>>n;
	vector<int> g[n+1];
	bool check[n+1]={0,};
	int ans[n+1];
	for(int i = 0 ;i<n-1;i++){
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
		
	}
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		int c = q.front();
		q.pop();
		check[c]=true;
		for(int e : g[c]){
			if(!check[e]){
				ans[e] = c;
				q.push(e);	
			}
		}
	}
	for(int i = 2;i<=n;i++) cout<<ans[i]<<"\n";
	return 0;
}
