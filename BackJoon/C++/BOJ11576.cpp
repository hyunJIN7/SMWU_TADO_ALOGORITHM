#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,m,tmp;
	string ans;
	long long dec=0;
	cin >> a >> b >>m;
	while(m--){
		cin>>tmp;
		dec = dec+(int)pow(a,m)*tmp ;
	}
	while(dec){
		ans = to_string(dec%b)+' ' +ans;
		dec/=b;
	}
	cout<<ans;
	return 0;
}
