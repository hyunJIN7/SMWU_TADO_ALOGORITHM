#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,num,ans;
	cin>>n;
	ans = n;
	while(n-- ){
		cin>>num;
		if(num<=1) ans--;
		else if (num==2) continue;
		for(int i = 2 ; i <= sqrt(num);i++){
			if( num%i == 0 ){
				ans--;break;
			}
		}
	}
	cout<<ans;
	return 0;
}
