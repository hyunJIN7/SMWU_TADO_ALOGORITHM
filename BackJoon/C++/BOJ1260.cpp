#include <bits/stdc++.h>
#define MAX 1001
using namespace std;
void BFS(int s , vector<int> g[], bool visit[]){
	queue<int> q;
	
	q.push(s);
	visit[s]=true;
	
	while( !q.empty() ){
		int current = q.front(),next;
		q.pop();
		cout<<current<<" ";		
		for(int i = 0 ; i <g[current].size();i++){
			next = g[current][i];
			if(!visit[next]){
				q.push(next);
				visit[next]=true;
			}
		}		
	}
}

void DFS(int start,vector<int> g[], bool visit[]){
	stack<int> s;
	s.push(start);
	visit[start]=true;
	cout<<start<<" ";
	while( !s.empty() ){
		int current = s.top(),next;
		s.pop();
		for(int i = 0 ; i < g[current].size();i++ ){
			next = g[current][i];
			if(!visit[next]){
				s.push(current);
				s.push(next);
				cout<<next<<" ";
				visit[next]=true;
				break;
			}
		}
	}	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	int s , m ,n;
	cin >>n>>m>>s;
	
	vector<int> g[n+1];
	bool visit[n+1];
	
	for(int i = 0 ; i < m ; i++ ){
		int u,v;
		cin >>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i = 1; i<=n ; i++ ) sort(g[i].begin(),g[i].end());
	fill(visit,visit + n +1,false);
	DFS(s,g,visit);
	cout<<"\n";
	fill(visit,visit + n +1,false);
	BFS(s,g,visit);
	return 0;
}

