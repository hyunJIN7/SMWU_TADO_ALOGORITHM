#include <bits/stdc++.h>
using namespace std;
int h,w;
int maze[101][101];
bool check[101][101]={0,};
queue<pair<int,int>> q;
int dx[4] = {0,-1,1,0};
int dy[4] = {-1,0,0,1};
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>h>>w;
	for(int i = 0 ; i <h ; i++){
		string tmp;
		cin>>tmp;
		for(int j = 0 ; j <w ; j++){
			maze[i][j] = tmp[j]-'0';
		}
	}
	q.push({0,0});
	check[0][0] = true;
	while(!q.empty()){
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for(int i = 0,nx,ny ; i < 4 ; i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx < 0 || nx >= w || ny < 0 || ny >= h ) continue;
			if( maze[ny][nx]==1 && !check[ny][nx]){
				maze[ny][nx] = maze[y][x]+1 ;
				q.push({ny,nx});
				check[ny][nx] = true;

			}	
		}		
	}
	cout<<maze[h-1][w-1]<<"\n";
	return 0;
}
