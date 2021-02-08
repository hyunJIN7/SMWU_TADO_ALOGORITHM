#include <iostream>
#include <cstring>
#include <algorithm>
#define MAX 301

using namespace std;

int main(){
	int n;
	int a[MAX],dp[MAX];
	scanf("%d",&n);
	memset(dp,0,sizeof(int)*(n+1));
	
	for(int i = 1 ; i<=n ;i++) scanf("%d",&a[i]);
	dp[1] = a[1];
	dp[2] = a[1]+a[2];
	for(int i = 3 ; i<=n;i++){
		dp[i] =  max( a[i]+a[i-1]+ dp[i-3] , a[i]+dp[i-2] );
	}
	printf("%d",dp[n]);
	return 0;
}
