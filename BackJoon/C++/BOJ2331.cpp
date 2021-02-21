#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,p,ans=0,tmp=0;
	vector<int> v;
	queue<int> q;
	scanf("%d %d",&a,&p);
	while(find(v.begin(),v.end(),a) == v.end()){
		v.push_back(a);
		q.push(a);
		tmp=0;
		while(a>=1){
			tmp = tmp + pow(a%10,p);
			a/=10;
		}
		a=tmp;
	}
	
	while( q.front() != a ){
		q.pop();
		ans++;
	}
	printf("%d",ans);
	
	return 0;
}
