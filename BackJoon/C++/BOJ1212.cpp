#include <bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin >> n;
	for(int i = 0,tmp ; i < n.size();i++){
		string ans;
		tmp = n[i] - '0';
		if(tmp-4>=0){
			ans += '1';
			tmp -=4;
		}
		else ans += '0';
		
		if(tmp-2>=0){
			ans += '1';
			tmp -=2;
		}
		else ans += '0';
		
		if(tmp-1>=0){
			ans += '1';
			tmp -=1;
		}
		else ans += '0';
		
		(i==0) ? cout<<stoi(ans) : cout<<ans;
		
		//cout << ((i==0) ? stoi(ans) : ans) ;
	}
	return 0;
}
