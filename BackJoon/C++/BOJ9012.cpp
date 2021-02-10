//https://www.acmicpc.net/problem/9012 
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N;
	string s;
	cin >>N;
	while(N--){
		cin>>s;
		int arr[2]={0,};
		for(char c : s){
			arr[int(c-'(')]++;
			if(arr[0]<arr[1]) {
				arr[1] = -1;
				break;
			}
		}
		(arr[0] != arr[1]) ? (cout<<"NO\n") :  (cout<<"YES\n");
	}
	return 0;
}

