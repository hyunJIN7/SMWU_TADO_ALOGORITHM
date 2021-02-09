#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
	return (a.second == b.second) ? (a.first<b.first):(a.second < b.second);
}

int main(){
	int n;
	scanf("%d",&n);
	
	vector <pair<int,int>> v(n); v.clear();
	
	while(n--){
		int a,b;
		scanf("%d %d",&a,&b);
		v.push_back({a,b});
	}
	sort(v.begin(),v.end(),compare);
	for(auto e : v) printf("%d %d\n",e.first,e.second);
	return 0;
}
