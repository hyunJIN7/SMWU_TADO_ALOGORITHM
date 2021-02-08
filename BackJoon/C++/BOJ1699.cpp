#include <bits/stdc++.h>
using namespace std;
int n,dp[100001];
int main(){
	scanf("%d",&n);
	memset(dp,0,sizeof(dp));
	dp[1]=1;
	for(int i=2 ; i<=n ;i++){
		dp[i]=i;
		for(int j = 1 ; j<= sqrt(i);j++){
			dp[i] = min(  dp[i-j*j] +1 ,dp[i] );
		}
	}
	printf("%d",dp[n]);
	return 0;
}
