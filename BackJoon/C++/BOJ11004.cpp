#include <bits/stdc++.h>

using namespace std;

int main (){
	int N ,K;
	scanf("%d %d",&N, &K);
	int a[N];
	for(int i = 0 ; i < N ; i++) scanf("%d",&a[i]);
	sort(a, a+N);
	printf("%d",a[K-1]);
	return 0;
}

