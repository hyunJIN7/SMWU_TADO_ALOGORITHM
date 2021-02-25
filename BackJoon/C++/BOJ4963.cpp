#include <bits/stdc++.h>
using namespace std;

int h,w,ans;
int land[51][51];
int dfs(int y, int x){
	if( y<0 || x<0 || y>=h || x>=w || !land[y][x] ) return 0;
	land[y][x] = 0;
	for(int i = -1; i <=1;i++){
		for(int j = -1; j<=1;j++){
			if(i || j) dfs(y+i,x+j);
		}	
	}
	return 1;	
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	while(1){
		cin>>w>>h;
		if(!h && !w) break;
		for(int i = 0 ,tmp;i < h; i++){
			for(int j = 0 ; j < w ;j++){
				cin>>tmp;
				land[i][j] = tmp;
			}			
		}	
		ans=0;		
		for(int i = 0 ;i < h ; i++){
			for(int j = 0 ; j < w ;j++){
				if(land[i][j]) 
					ans= ans + dfs(i,j);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
