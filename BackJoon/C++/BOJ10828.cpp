//https://www.acmicpc.net/problem/10828  스택 
// try catch로 예외처리 하는 방법도 있다 
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, x;
	stack<int> s;	
	string cmd;
	cin >> N;
	while(N--){
		cin >>cmd; 
		if( !cmd.compare("push")){
			cin >> x;
			s.push(x);
		}
		else if( !cmd.compare("pop")){
			if(!s.empty()) cout<<s.top()<<"\n",s.pop();
			else cout<<"-1\n";
		}
		else if( !cmd.compare("size")){
			cout<<s.size()<<"\n";
		}
		else if( !cmd.compare("empty")){
			s.empty() ? (cout<<"1\n") : (cout<<"0\n");
		}
		else{ //top 
			if(!s.empty()) cout<<s.top()<<"\n";
			else cout<<"-1\n";
		}
	}
	return 0;
}

