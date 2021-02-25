#include <bits/stdc++.h>

using namespace std;
int n,cnt=0 ,g[27][27]={0,};
vector<int> ans;

int dfs(int y,int x){
	if(!g[y][x] || y>n || x>n || x<1||y<1) return 0;
	g[y][x] = 0;
	return 1 + + dfs(y + 1, x) + dfs(y - 1, x)+dfs(y, x + 1) + dfs(y, x - 1);
}

int main(){
	cin>>n;
	for(int i = 1; i<=n ; i++){
		string tmp;
		cin >> tmp;
		for(int j=0;j<n;j++) g[i][j+1] = tmp[j]-'0';
	}
	for(int j = 1; j<=n ;j++){
		for(int i = 1 ; i <= n ; i++){
			if(g[j][i]){
				ans.push_back( dfs(j,i) );
			}
		}
	}
	cout << ans.size()<<"\n";
	sort(ans.begin(),ans.end());
	for(auto e : ans) cout<<e<<"\n";
	return 0;
}
