#include <bits/stdc++.h>

using namespace std;
int d,k,a,b;
int A[31]={0,1,0};
int B[31]={0,0,1};
void Input(){
	scanf("%d %d",&d,&k);
}
void Solution(){
	for(int i = 3 ; i <=d;i++){
		A[i] = A[i-1]+A[i-2];
		B[i] = B[i-1]+B[i-2];
	}	
	for(a=0; a<=k ; a++){
		if(  (k - A[d]*a)%B[d] == 0 ){
			b = (k - A[d]*a)/ B[d];
			break;
		}
	}
	printf("%d\n%d",a,b);
}
void Solve(){
	Input();
	Solution();
}

int main(){
	Solve();	
}
