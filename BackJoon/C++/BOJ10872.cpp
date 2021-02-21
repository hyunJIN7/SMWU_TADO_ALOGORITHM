#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=1;
	cin>>n;
//	if(!n) cout<<1;
	while(n--){
		ans *= (n+1);
	}
	cout<<ans;
	return 0;
}
