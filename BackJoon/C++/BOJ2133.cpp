#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int d[31];
	scanf("%d",&n);
	if(n%2==1) {
		printf("0"); return 0;
	}
	d[0] = 1;
	d[1] = 0;
	d[2] = 3;
	for(int i =4 ; i <=n ;i+=2){
		d[i] = d[i-2]*d[2];
		for(int j= i-4; j>=0 ;j -= 2){
			d[i] = d[i] + d[j]*2;
		}
	}
	printf("%d",d[n]);
	return 0;
}
