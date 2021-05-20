#include <bits/stdc++.h>

using namespace std;
#define MAX 102
int n,m,k,ans=0;
int MAP[MAX][MAX]={0,};
bool check[MAX][MAX];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
void DFS(int y,int x){
	stack<pair<int,int>> s;
	s.push({y,x});
	check[y][x]=true;
	int cnt=1;
	
	while(!s.empty()){
		int cy=s.top().first,cx=s.top().second;
		s.pop();
		
		for(int i = 0 ; i < 4 ; i++){
			if(cy+dy[i] <1 || cy+dy[i] > n || cx+dx[i]<1 ||cx+dx[i]>m)continue;
			if(!check[cy+dy[i]][cx+dx[i]] && MAP[cy+dy[i]][cx+dx[i]]==1 ){
				s.push( { cy+dy[i] , cx+dx[i] } );
				check[cy+dy[i]][cx+dx[i]] = true;
				cnt++;
			}
		}
		
	}
	ans = max(ans,cnt);
	
}

int main(){
	scanf("%d %d %d",&n,&m,&k);
	while(k--){
		int y,x;
		scanf("%d %d",&y,&x);
		MAP[y][x]=1;
	}
	memset(check,false,sizeof(check));
	for(int i = 1; i<=n; i++){
		for(int j = 1;j<=m;j++){
			if(!check[i][j] && MAP[i][j]==1){
				DFS(i,j);
			}
		}
	}
	printf("%d",ans);
}
