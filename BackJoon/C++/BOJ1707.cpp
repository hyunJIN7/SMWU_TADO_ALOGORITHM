#include <bits/stdc++.h>

using namespace std;

vector<int> g[20001];
int color[20001]={0,};
int k,v,e;

void DFS(int s, int c){
	color[s] = c;
	for(int i : g[s])
		if(!color[i]) DFS(i,3-c);	
}
bool isBG(){
	for(int i = 1;i<=v;i++){
		for(int j : g[i]){
			if(color[j] == color[i]) return false;
		}
	}
	return true;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>k;
	while(k--){
		for(int i = 1 ; i <=v ; i++) g[i].clear();
		memset(color,0,sizeof(color));
		cin >>v>>e;
		while(e--){
			int u,v;
			cin >> u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
			
		}
		for(int j = 1; j <=v ;j++)
			if(!color[j]) DFS(j,1);
		(isBG() ) ? cout<<"YES\n" : cout<<"NO\n";
	}
	return 0;
}
