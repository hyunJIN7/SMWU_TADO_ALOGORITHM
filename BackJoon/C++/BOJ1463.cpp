//BOJ1463 1로 만들기  
//https://www.acmicpc.net/problem/1463
//DP & BFS

#include <bits/stdc++.h>
//#include <iostream>
//#include <cstring>
//#include <algorithm> 

#define N_MAX (int)1E6+1
using namespace std;
int dp[N_MAX];
int solution(int n)
{
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
			dp[i] = min(dp[i / 2] + 1, dp[i]);
		if (i % 3 == 0)
			dp[i] = min(dp[i / 3] + 1, dp[i]);
	}

	return dp[n];

}
int main(){
	dp[1] = 0;
	int n;
	scanf("%d",&n);
	memset(dp,0,sizeof(int)*(n+1));
	printf("%d",solution(n));
}

