//https://www.acmicpc.net/problem/9095
// BOJ 9095
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

//¼ô ÄÚµùÀ¸·Î ¹Ù²Þ  
int dp[12] = {0,1,2,4} ;

int main(){

	int t,n;
	scanf("%d",&t);
	
	for(int i = 4; i <=11 ;i++){ 
		dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	}
	
	while(t--){
		scanf("%d",&n);
		printf("%d\n",dp[n]);
	}
	return 0;	
}
