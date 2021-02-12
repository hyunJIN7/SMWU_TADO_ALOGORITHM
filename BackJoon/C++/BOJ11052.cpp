#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, card[1001]={0,},dp[1001]={0,};
	scanf("%d",&N);
	for(int i = 1; i<=N; i++){
		
		scanf("%d",&card[i]);
		
		for(int j =1; j<=i;j++){
			dp[i] = max(dp[i], dp[i-j]+card[j]);
		}
	}
	printf("%d",dp[N]);
	return 0;	
}
