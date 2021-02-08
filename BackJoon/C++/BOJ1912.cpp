#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int a[MAX],dp[MAX];

int main(){
	int n,res=-1001;//res 초기화 해야하 
	
	scanf("%d",&n);
	memset(dp,0,sizeof(dp)); 
	
	for(int i = 1 ; i<=n;i++){
		scanf("%d",&a[i]);
		dp[i] =max(a[i] ,a[i]+dp[i-1]);
		res = max(dp[i],res);
	}	
	printf("%d",res);
	return 0;
}
