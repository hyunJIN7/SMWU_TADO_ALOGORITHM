#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,max=0;
	long long tmp;
	scanf("%d",&N);
	map <long long ,int> m;	
	while(N--){
		scanf("%lld", &tmp ),m[tmp]++;
	}	
	for(auto e : m){
		if(max < e.second) max = e.second, tmp = e.first;
	}
	printf("%lld",tmp);
	return 0;
}
