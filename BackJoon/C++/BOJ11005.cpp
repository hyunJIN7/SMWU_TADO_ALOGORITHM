#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,b;
	string ans;
	cin>> n>>b;	
	while(n>0){
		char c = (n%b)<10 ? char(n%b + '0') : char('A'-10 + n%b);
		ans = c + ans;
		n/=b;
	}
	cout<<ans;
	return 0;
}
