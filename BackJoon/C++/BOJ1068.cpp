#include <bits/stdc++.h>
using namespace std;
vector<int> g[50];
int n,root,del,ans=0;
void dfs(int p ,int c){
	if(c == del){
		if(p!= -1 && g[p].size() == 1) ans++;
		return ;
	}
	if(g[c].size()==0) {
		ans++;
		//return ;	
	}
	for(auto e : g[c]){
		dfs(c,e);
	}	
}


int main(){
	//0~49±îÁö  
	cin>> n;
	for(int i = 0,p ; i< n ;i++){
		cin>>p;
		if(p!=-1) g[p].push_back(i);
		else root = i;
	}
	cin>>del;
	dfs(-1,root);
	cout<<ans;
	return 0;
} 
