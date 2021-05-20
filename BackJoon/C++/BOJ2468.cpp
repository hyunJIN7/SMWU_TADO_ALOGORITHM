#include <bits/stdc++.h>
using namespace std;
int n,max_height=0,ans=0; 
int MAP[101][101];
bool visited[101][101];
void DFS(int i, int j,int h){
	if(i < 0 || i>=n || j<0|| j>=n )return;
	if(visited[i][j] == true || MAP[i][j]<=h) return;
	
	visited[i][j] = true;
	
	DFS(i-1,j,h);
	DFS(i+1,j,h);
	DFS(i,j-1,h);
	DFS(i,j+1,h);
}

int main(){
//IO 줄이는 방법 있나? getline으로 들여와서 띄어쓰기로 하는 것?	
	scanf("%d",&n);
	for(int i = 0 ; i < n;i++){
		for(int j = 0,tmp ; j <n;j++){
			scanf("%d",&tmp);
			if(max_height < tmp) max_height=tmp;
			MAP[i][j]=tmp;
		}
	}
	
	for(int safe_loc_num,h = 0 ; h <= max_height ; h++){ 
		memset(visited,false,sizeof(visited));

		safe_loc_num=0;
		
		for(int i = 0; i < n ; i++ ) {
			for(int j = 0 ; j < n ;j++){
				if(visited[i][j]==false && MAP[i][j] > h ){ 
					safe_loc_num++;
					DFS(i,j,h);
				}
				else visited[i][j] = true;					
			}	
		}
		if(ans < safe_loc_num) ans = safe_loc_num;
	}
	printf("%d",ans);
	
}
