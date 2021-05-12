#include <bits/stdc++.h>

using namespace std;
int m,n;
int arr[101][101], sum;
void dps(int x, int y){
	if(x<0 || x>=n ||y<0 || y>=m) return;
	if(arr[x][y]==0) return;
	sum++;
	arr[x][y]=0;
	dps(x+1,y);
	dps(x,y+1);
	dps(x,y-1);
	dps(x-1,y);
}

int main(){
	int k,ans=0;
	vector <int> area; 
	fill(arr[0],arr[0]+10201,1); //¸ðµÎ 1·Î 
	scanf("%d %d %d",&m,&n,&k);
	while(k--){
		int xy[2][2];
		scanf("%d %d %d %d", &xy[0][0],&xy[0][1],&xy[1][0],&xy[1][1]);	

		for(int x = xy[0][0]; x < xy[1][0] ; x++){
			for(int y = xy[0][1]; y < xy[1][1] ; y++){
				arr[x][y] = 0;	
			}
		}
	}
	
	
	for(int i = 0 ;i< n ; i++){ // x
		for(int j = 0 ; j < m ;j++){ // y
			if(arr[i][j]){
				ans++;
				sum=0;
				dps(i,j);
				area.push_back(sum);
			}	
		}
	}
	
	sort(area.begin(),area.end());
	printf("%d\n",ans);
	for(auto e : area) printf("%d ",e);



}

