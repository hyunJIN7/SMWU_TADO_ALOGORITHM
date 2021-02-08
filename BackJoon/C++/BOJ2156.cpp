//https://www.acmicpc.net/problem/2156
#include <bits/stdc++.h>
#define MAX 10010
using namespace std;

int arr[MAX],dp[MAX];

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1 ; i <=n ; i++){
		scanf("%d",&arr[i]);	
	}
	memset(dp,0,sizeof(dp));
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	for(int i = 3;i<=n;i++){
		dp[i] = max(  max( dp[i-2]+arr[i] , dp[i-3]+arr[i]+arr[i-1])  ,dp[i-1] );
	}
	printf("%d",dp[n]);
	
	return 0;
}
