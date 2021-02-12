#include <bits/stdc++.h>

using namespace std;

int main(){
	int i=0,alpha[26]={0,};
	string word;
	cin>>word;
//	for(cin>>word ;  word[i] ;) alpha[ word[i++]-'a']++; 
// 위에 이렇게도 가능 
	for(auto c : word)	alpha[c-'a']++;
	for(auto e : alpha) cout<<e<<" ";
	return 0;
}
