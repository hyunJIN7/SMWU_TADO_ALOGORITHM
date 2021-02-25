// 입출력 예제 잘 보고 문제 풀기 
#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int n,k,ans=0;
bool check[MAX];
void dfs(){
	queue<pair<int,int>> q;
	q.push({n,0}); // 위치,시간 
	check[n] = true;
	while(!q.empty()){
		int c = q.front().first ; //현재위치
		int  cnt = q.front().second;
		q.pop();
		if(c==k){
			cout<<cnt;
			return;
		}	 

		// -1
		if( c - 1 >= 0 && !check[c-1]){
			q.push({c-1 ,cnt+1 });
			check[c-1] = true;
		}
		// +1
		if(c+1 <= MAX && !check[c+1]){
			q.push({c+1 ,cnt+1 });
			check[c+1] = true;
		}
		//*2
		if( 2*c <= MAX && !check[2*c]){
			q.push({2*c ,cnt+1 });
			check[2*c] = true;
		}
	}
}


int main(){
	cin>>n>>k;
	memset(check, false, sizeof(check));
	dfs(); 
	return 0;
}
