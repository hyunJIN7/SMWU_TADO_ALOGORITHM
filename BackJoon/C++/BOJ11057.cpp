#include <bits/stdc++.h>
#define mod 10007

using namespace std;

int main(){
	int n, dp[10001][10]={0,};
	long long sum=0;
	for(int i = 0 ; i<=9;i++) dp[1][i] = 1;
	scanf("%d",&n);
	
	for(int i =2 ; i <=n ; i++){
		dp[i][0] = dp[i-1][0];
		for(int j = 1 ; j<=9 ; j++)	dp[i][j] = (dp[i][j-1] + dp[i-1][j])%mod;	
	}
	for(int i=0;i<10;i++) sum+= dp[n][i];
	printf("%d",sum%mod);
	return 0;
}

