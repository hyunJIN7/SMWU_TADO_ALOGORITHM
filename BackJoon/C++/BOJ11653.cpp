#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int n;
	cin >> n;
	if(n==1) return 0;

	for(int i = 2 ; i<=n;i++){
		while( !(n%i) ){
			cout<<i<<"\n";
			n/=i;
		}		
		
	}


	return 0;
}
