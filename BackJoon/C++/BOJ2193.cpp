//https://www.acmicpc.net/problem/2193
// BOJ 2193 이친수 
#include <iostream>
#define N_MAX 100
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	
	long long dp[N_MAX][2]= { { 0,0 },{ 0, 1 },{ 1,0 } };
	long long dp2[N_MAX] = {0,1,1,};
	//sol1
	for(int i=2; i <= n ; i++ ){	
		dp[i][0] = dp[i-1][0] + dp[i-1][1];
		dp[i][1] = dp[i-1][0];
	}
	//sol2 , 점화식 세워보면 금방 나온다.
	for(int i=3; i<=n ; i++){
		dp2[i] = dp2[i-2]+dp2[i-1];
	}
	
	//printf("%lld", (dp[n][0]+dp[n][1]) );
	printf("%lld", dp2[n] );

	return 0;
}
