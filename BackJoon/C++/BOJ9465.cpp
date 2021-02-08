//https://www.acmicpc.net/problem/9465
//Âü°í : https://yabmoons.tistory.com/523?category=838244 
#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

int n;
int arr[2][MAX],dp[2][MAX];

int Max(int a,int b){if(a>b) return a; return b;}


void Solution(){
	dp[0][1] = arr[0][1];
	dp[1][1] = arr[1][1];
	
	for(int i = 2 ; i <=n;i++){
		dp[0][i] = Max(dp[1][i-1],dp[1][i-2]) + arr[0][i];
		dp[1][i] = Max(dp[0][i-1],dp[0][i-2]) + arr[1][i];
	}
	printf("%d\n", Max(dp[0][n],dp[1][n]));
}

void Input(){
	scanf("%d",&n);
	for (int i = 0; i <= 1; i++){
        for (int j = 1; j <= n; j++){
            scanf("%d ", &arr[i][j]);
        }
	}
//		for(int i = 0 ; i<2*n;i++){
//			scanf("%d",arr[i/n][i%n]);
//		}
}

void Solve(){
	int t;
	scanf("%d",&t);
	
	for(int i = 0 ; i<t; i++){
		memset(dp,0,sizeof(dp));
		Input();
		Solution();
	}
}

int main (){
	Solve();	
	return 0;
}
