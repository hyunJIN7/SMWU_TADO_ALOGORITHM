#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	long long tmp=1;
	cin>>n;
//	while(n--){
//		tmp *= (n+1);
//		while(tmp%10 ==0 ){
//			tmp/=10;
//			ans++;
//		}
//		tmp = tmp%1000;
//	} 
//	cout<<ans;
	cout << n/5+n/25+n/125;
	return 0;
}
