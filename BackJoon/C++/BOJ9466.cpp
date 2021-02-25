#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
int cnt;
int g[MAX];
bool visited[MAX];
bool done[MAX];

void DFS(int s){
	visited[s]=true;
	int next = g[s];

	if( !visited[next] ){
		DFS(next);
	}
	else if(!done[next]){
		//사이클 
		for(int i= next ; i!=s; i = g[i] ){
			cnt++;
		}
		cnt++;//자신 
	}	
	done[s]=true;//자신 
}

int main(){
	   ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t,n;
	cin>>t;
	while(t--){	
		cin>>n;
		memset( visited ,false,sizeof(visited));
		memset( done ,false,sizeof(done));		
		cnt=0;	
			
		for(int i = 1 ; i <= n ;i++) cin>>g[i];
		
		for(int i = 1 ; i<=n ; i++)
			if(!visited[i]) DFS(i);
			
		cout<< n - cnt <<"\n";
	}
	return 0;
}
