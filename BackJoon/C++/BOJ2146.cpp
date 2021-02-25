#include <bits/stdc++.h>
using namespace std;
//같은 섬인지 판단 후 외곽 좌표만 모으기
// 섬의 외곽끼리 거리 구해서 최단 거리 구하기 
int n,land_lable=0;
int land[101][101]={0,};// 0 : 바다 , -1: 섬 -> 1,2,3.. : 섬 그룹 번호 
int dist[101][101]; // -1: 방문전, 0 이상 방문했고 거리 
int group[101][101]; // dist의 그룹 적는  
int dx[4] = {0,-1,1,0}, dy[4] = {-1,0,0,1};


void Input(){
		//입력 
	cin >> n;
	for(int i = 0,tmp;i<n;i++){
		for(int j = 0 ; j < n;j++){
			scanf("%1d",&tmp);
			if(tmp) land[i][j] = -1;
		}
	}
}

//void Make_LandLable(int a,int b,int cnt){
//	queue<pair<int,int>> q;
//	q.push({a,b});
//	while(!q.empty()){
//		int y = q.front().first;
//		int x = q.front().second;
//		q.pop();
//		land[y][x] = cnt;
//		group[y][x] = cnt; // 섬 그룹 번호 
//		for(int i = 0 ; i<4 ; i++){
//			int nx = x + dx[i] , ny = y+dy[i];
//			if(ny<0 || ny>=n || nx<0 || nx>=n || land[ny][nx] !=-1) continue;
//			q.push({ny,nx});
//		}
//	}
//}

void Make_LandLable(int a,int b,int cnt){
	queue<pair<int,int>> q;
	q.push({a,b});
	land[a][b] = cnt;
	group[a][b] = cnt; // 섬 그룹 번호 	
	while(!q.empty()){
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for(int i = 0 ; i<4 ; i++){
			int nx = x + dx[i] , ny = y+dy[i];
			if(ny<0 || ny>=n || nx<0 || nx>=n || land[ny][nx] !=-1) continue;
			q.push({ny,nx});
			land[ny][nx] = cnt;
			group[ny][nx] = cnt; // 섬 그룹 번호 
		}
	}
}


void Min_Distace(){
	queue<pair<int,int>> q;
	
	//섬 좌표들  q에 넣고 
	for(int i = 0 ; i< n ; i++){
		for(int j=0; j<n;j++){
			if(land[i][j]>0){//섬이라면 
				dist[i][j] = 0;//land의 dist는 0 
				q.push({i,j});
			}
		}
	} 
	
	int ans = 3*n ;	
	//land와 q 이용해 dist 값 채우기 
	while(!q.empty()){
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		
		for(int i = 0 ; i< 4 ;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(ny<0 || ny>=n || nx<0 || nx>=n) continue;
			
			if( dist[ny][nx] == -1 ) {
				//방문 전 , 어차피 바다만 걸림, 위에서 land는 다 0으로 해서
				dist[ny][nx] = dist[y][x]+1;
				group[ny][nx] = group[y][x];
				//다시 q에 넣어줘야함 
				q.push({ny,nx});
				
			}
			//방문 이미 했고 그룹 다를 경우
			if( dist[ny][nx] != -1 && group[ny][nx] != group[y][x]){
				ans = min(dist[ny][nx] + dist[y][x] , ans);
			}
		}
	}

//	for(int i = 0 ; i < n ; i++){
//		for(int j = 0 ; j < n ; j++){
//			for(int k = 0 ; k < 4 ; k++){
//				int nx = j + dx[k];
//				int ny = i + dy[k];
//				if(ny<0 || ny>=n || nx<0 || nx>=n) continue;
//				if(group[i][j] != group[ny][nx]){
//					ans = min(dist[ny][nx] + dist[i][j] , ans);
//				}
//				
//			}
//		}
//	}
	
	cout<<ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	
	Input();


	//섬 그룹 만들기 
	for(int i = 0;i<n;i++)
		for(int j = 0 ; j < n;j++)
			if(land[i][j]==-1)	Make_LandLable(i,j,++land_lable);		
		
			
	memset(dist,-1, sizeof(dist));//방문전 -1 

	//바다에서 가장 가까운섬까지의 거리 , 섬에서 섬까지의 거리 
	Min_Distace(); 	

	return 0;
}
