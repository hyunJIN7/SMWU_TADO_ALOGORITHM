#include <bits/stdc++.h>

using namespace std;
//compare 없이도 pair 오름차순 정렬됨 
//bool compare(pair<int,int> a, pair<int,int> b){
//	return (a.first == b.first) ? (a.second < b.second ):( a.first < b.first);
//}

int main(){
	int n;
	scanf("%d",&n);
	vector< pair<int,int> > v(n);
	v.clear();	
	while(n--){
		int a,b;
		scanf("%d %d",&a,&b);
		v.push_back( {a,b} );//make_pair(a,b)
	}
	sort(v.begin(),v.end());
	for(auto elem : v)	
		printf("%d %d\n",  elem.first , elem.second);	
	return 0;
}
