//https://www.acmicpc.net/problem/10989 , ¼ö Á¤·Ä3 
#include <bits/stdc++.h> 

using namespace std;

int main(){
	int n,tmp, arr[1001]={0,};
	scanf("%d",&n);
	while(n--){
		scanf("%d",&tmp);
		arr[tmp]++;
	}
	for(int i = 1 ; i<1001;i++) while(arr[i]--) printf("%d\n",i);
	return 0;
}
