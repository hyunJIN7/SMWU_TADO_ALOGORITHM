#include <bits/stdc++.h>

using namespace std;

int t,n;
bool check[1001]={0,};
vector<int> g[1001];

void DFS(int s){
	check[s]=true;
	for(int i : g[s])
		if(!check[i]) DFS(i);
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0 ; i <=n ; i++) g[i].clear();
		memset(check,0,sizeof(check));
		int ans = 0;
		
		for(int i = 1,j; i <=n;i++){
			cin >> j;
			g[i].push_back(j);
			g[j].push_back(i);
		}
		for(int i = 1; i<=n ;i++){
			if(!check[i]){
				DFS(i);
				ans++;
			}
		}
			
		
		cout<<ans;
	}
	
	
	return 0;
}
