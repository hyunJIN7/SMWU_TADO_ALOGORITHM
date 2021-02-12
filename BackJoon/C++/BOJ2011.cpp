#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[5001];
	long long dp[5001]={1,};  
	string s;
	cin >> s;	
	int len = s.length();
	if(s[0] == '0'){
		cout<<"0";
		return 0;
	}
	for(int i = 0; i< len ; i++) arr[i+1] = s[i] - '0';
	for(int i=1 ; i <= len ;i++){
		if(arr[i] >=1 && dp[i] <= 9)
			dp[i] =  (dp[i] +dp[i-1])% 1000000;
		int tmp = arr[i-1]*10 + arr[i];
		if( 10<= tmp && tmp <= 26 ) 
			dp[i] = (dp[i] + dp[i-2])% 1000000;
	}	
	cout<<dp[len];
	return 0;
}

