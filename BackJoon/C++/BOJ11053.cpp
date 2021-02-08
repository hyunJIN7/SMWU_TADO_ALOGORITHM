//https://www.acmicpc.net/problem/11053
// Âü°í : https://yabmoons.tistory.com/516?category=838244  
#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int a[MAX],dp[MAX];

int main(){
	int n,ans=0;
	scanf("%d",&n);
	for(int i = 1 ; i<=n;i++) scanf("%d",&a[i]);
	memset(dp,0,sizeof(dp));
	
	for(int i = 1 ; i<=n ;i++){
		dp[i]=1;
		for(int j = i-1 ; j>0 ;j--){
			if( a[i] > a[j] && dp ){
				dp[i] = max(dp[i],dp[j]+1);
			}
			
		}
		ans = max(ans,dp[i]);		
	}
	printf("%d",ans);
	return 0;
}

