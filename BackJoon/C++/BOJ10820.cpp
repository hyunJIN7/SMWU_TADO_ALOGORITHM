#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		if(s=="") break; 
		int n[4]={0,};
		for(char e : s){
			if( e >= 'a' && e <= 'z' ) n[0]++;
			else if(e >= 'A' && e <= 'Z' ) n[1]++;
			else if( e >='0' && e<='9' ) n[2]++;
			else n[3]++;
		}
		for(auto i : n)
			cout<<i<<" ";
		cout<<"\n";
	}	
	return 0;
} 
