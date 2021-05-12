#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int rgbhouse[1002][3]={0,};
	scanf("%d",&n);
	for(int i = 1 ; i <=n ;i++){
		int r,g,b;
		scanf("%d %d %d",&r,&g,&b);
		rgbhouse[i][0] = min(rgbhouse[i-1][1],rgbhouse[i-1][2]) + r;
		rgbhouse[i][1] = min(rgbhouse[i-1][0],rgbhouse[i-1][2]) + g;
		rgbhouse[i][2] = min(rgbhouse[i-1][1],rgbhouse[i-1][0]) + b;
	}	
	printf("%d", min( min(rgbhouse[n][0],rgbhouse[n][1]),rgbhouse[n][2]) );
}
