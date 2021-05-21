#include <bits/stdc++.h>
using namespace std;
#define MAX 9
int n,m;
int arr[MAX]={0,};
bool visited[MAX]={0,};
void DFS(int cnt){
	if(cnt==m){
		string ans="";
		for(int i = 0 ; i < m ;i++) 
			ans = ans + to_string(arr[i])+" ";
		cout<<ans<<"\n";
		return;
	}
	
	for(int i = 1 ; i <= n ; i++){

		visited[i]=true;
		arr[cnt]=i;
		DFS(cnt+1);
		visited[i]=false;
		
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	DFS(0);
}
