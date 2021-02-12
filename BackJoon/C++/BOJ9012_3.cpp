//https://www.acmicpc.net/problem/9012 
#include <bits/stdc++.h>
using namespace std;

int main(){
	//ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	string s;
	cin >>N;
	while(N--){
		cin>>s;
		int stack=0;
		for(char c : s){
			if(c == '(')	stack++;			
			if( c==')') stack--;
			if(stack < 0) break;
		}
	 	(stack==0 )?(cout<<"YES\n") : (cout<<"NO\n");
	}
	return 0;
}

