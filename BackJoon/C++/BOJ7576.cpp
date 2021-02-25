#include <bits/stdc++.h>
using namespace std;
int w,h,ans=0;
int box[1001][1001];
int dx[4] = {0,-1,1,0};
int dy[4] = {0-1,0,0,1};
queue<pair<int,int> > q;
//int bfs(){
//	while(!q.empty()){
//		int y = q.front().first;
//		int x = q.front().second;
//		q.pop();
//		for(int i = 0,nx,ny ; i < 4 ; i++){
//			nx = x + dx[i];
//			ny = y + dy[i];
//			if(nx < 0 || nx >= w && ny < 0 && ny >= h ) continue;
//			if(box[ny][nx]==0){
//				box[ny][nx] = box[y][x]+1;
//				q.push({ny,nx});
//			}
//			
//		}		
//	}
//	
//}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin >> w>>h;
	for(int i = 0; i < h;i++){
		for(int j = 0;j<w;j++){
			cin >> box[i][j];
			if(box[i][j]==1){
				q.push( {i,j});
			} 
		}
	}
//	bfs();
	while(!q.empty()){
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for(int i = 0,nx,ny ; i < 4 ; i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx < 0 || nx >= w || ny < 0 || ny >= h ) continue;
			if(box[ny][nx]==0){
				box[ny][nx] = box[y][x]+1;
				q.push({ny,nx});
			}
			
		}		
	}
	for(int i = 0 ; i < h ; i++){
		for(int j = 0 ; j<w; j++){
			if(box[i][j]==0){
				cout<<"-1\n";
				return 0;
			}
			ans = max(ans , box[i][j]);
		}
		
	}
	cout<< ans-1<<"\n";
	return 0;
}
