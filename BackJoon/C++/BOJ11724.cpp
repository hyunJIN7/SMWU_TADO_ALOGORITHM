#include <bits/stdc++.h>

using namespace std;

vector<int> graph[10001];
bool check[10001]={0,};

void DFS(int start){
	check[start]=true;
	for(int i : graph[start])
		if(!check[i]) DFS(i);
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m,ans=0;
	cin >> n>>m;	
	while(m--){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);		
	}
	
	for(int i = 1; i <= n ; i++){
		if(!check[i]) {
			DFS(i);
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
