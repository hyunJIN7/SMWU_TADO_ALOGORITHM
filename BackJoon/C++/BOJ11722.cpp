// https://www.acmicpc.net/problem/11722 가장 긴 감소하는 부분 수열 

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, ans = 0,a[1001], dp[1001]={0,};
	cin >> n;
	for(int i =1 ; i<= n; i++){
		cin >> a[i];
		dp[i] = 1;
		for(int j=i-1 ; j > 0 ;j--){
			if( a[i] < a[j] ){
				dp[i] = max(dp[i] , dp[j]+1);
			}
		}
		ans = max(ans,dp[i]);
	}
	cout<< ans;
	return 0;
} 


