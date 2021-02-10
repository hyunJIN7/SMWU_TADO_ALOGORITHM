#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,max=1;
	long long *a,ans;
	scanf("%d",&N);
	a = new long long[N];
	for(int i = 0 ; i< N ; i++)	scanf("%lld",&a[i]);
	sort(a,a+N);

	ans = a[0];
	for(int i = 1,tmp=1 ; i<N;i++){
		if(a[i-1] == a[i]){
			if( ++tmp > max){
				ans = a[i];
				max = tmp;
			}	
		}
		else{
			tmp=1;
		}
		
	}
	printf("%lld",ans);
	return 0;
}
