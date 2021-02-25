//방법은 같음. 그냥 숏코딩으로 바꿈 
// 입출력 예제 잘 보고 문제 풀기 
#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
int n,k,ans=0;
int check[MAX]={0,};
queue<int> q;
void bfs(int x,int time){
	if( x >= 0 && x <= MAX && !check[x]){
		q.push(x);
		check[x] = time;
	}
}

int main(){
	cin>>n>>k;
	q.push(n); 
	check[n] = 1;
	while(!q.empty()){
		int c = q.front();
		q.pop();
		if(c==k)break;	 
		bfs(c-1,check[c]+1);
		bfs(c+1,check[c]+1);
		bfs(2*c,check[c]+1);
	}
	cout<<check[k]-1;
	return 0;
}
