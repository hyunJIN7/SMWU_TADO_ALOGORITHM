#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(auto c : s){
		if ( islower(c) ) cout<< char( (c - 'a' + 13)%26 + 'a') ;
		else if ( isupper(c)) cout<<  char((c - 'A' + 13)%26 + 'A');
		else cout<<c;
	}	
	return 0;
}
