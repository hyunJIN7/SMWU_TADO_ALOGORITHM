#include <bits/stdc++.h>

using namespace std;
bool compare(pair<int, string> a, pair<int, string> b){
    return a.first<b.first;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	vector<pair<int,string>> v(n); v.clear();
	
	while(n--){
		int a;string b;	
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	
	stable_sort(v.begin(),v.end(),compare);
	for(auto e : v) cout<<e.first<<" "<<e.second<<"\n";
	return 0;
} 
