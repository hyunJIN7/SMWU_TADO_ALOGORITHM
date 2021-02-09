#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	long long d[101]={0,1,1,1,2,2};
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i = 6 ; i<=n ;i++){
			d[i] = d[i-1] + d[i-5];
		}
		//타입 맞춰서 출력하기!!! 
		printf("%lld\n",d[n]);
	}
	return 0;
}
