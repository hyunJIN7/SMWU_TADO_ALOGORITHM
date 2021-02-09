#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,res=0;
	int a[1005],dp[1005];
	scanf("%d",&n);
	for(int i = 1; i <= n ; i++){
		scanf("%d",&a[i]);
		dp[i] = a[i];
		for(int j = i-1; j>0 ;j--){
			if(a[i]>a[j]){
				dp[i] = max(dp[i], dp[j]+a[i] );
			}
		}
		res = max(res,dp[i]);
	}
	printf("%d",res);
	
	return 0;
}
