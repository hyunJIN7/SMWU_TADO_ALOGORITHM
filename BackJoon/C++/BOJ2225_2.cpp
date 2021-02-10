#include <bits/stdc++.h>
#define Moduler 1000000000
using namespace std;

int main (){
	int K,N;
	long long dp[201][201]={0,}; // k n
	scanf("%d %d",&N,&K);
	for(int i = 0; i<=200; i++){
		dp[i][0] = 1;
	}

	for(int k = 1 ; k <= K ;k++){
		for(int n = 1; n <=N ; n++){
			dp[k][n] = (dp[k][n-1] + dp[k-1][n])%Moduler;	
		}
	}	
	printf("%lld",dp[K][N]);
	return 0;
} 
