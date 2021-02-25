#include <bits/stdc++.h>
using namespace std;
vector<int> g[50];
int n,root,del,ans=0;
void dfs(){
	stack<int> s;
	s.push(root);
	
	while(!s.empty()){
		int c = s.top();
		s.pop();
		if(c == del){
			
			continue;
		}
		for(int i = 0 ; i < g[c].size();i++){
			s.push(g[c][i]);
			if(g[c][i] == del){
				if(g[c].size()-1 == 0) ans++;
			} 

			
		}
//		cout << c << "의 자식 " <<g[c].size()<<"\n"; 
		
		if(g[c].size()==0) ans++;
		
	}
}


int main(){
	//0~49까지  
	cin>> n;
	for(int i = 0,p ; i< n ;i++){
		cin>>p;
		if(p!=-1) g[p].push_back(i);
		else root = i;
	}
	cin>>del;
	dfs();
	cout<<ans;
	return 0;
} 
