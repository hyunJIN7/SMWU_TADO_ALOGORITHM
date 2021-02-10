// https://www.acmicpc.net/problem/11054
//{ 1 , 2 , 3 , 4 }  { 4 , 3 , 2 , 1 } -> {1 , 2 , 3 , 4 , 3 , 2 , 1} 
// 증가 부분 수열 4 + 감소 부분 수열 4 -1  = 7 
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,ans=0,a[1001],dp1[1001]={0,},dp2[1001]={0,};
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);	
	cin>> n;
	for(int i = 1 ;i<= n; i++){
		cin>>a[i];
		dp1[i]=1;
		//증가
		for(int j = i-1 ; j>0 ; j--){
			if(a[i] > a[j] )
				dp1[i] = max(dp1[i], dp1[j]+1);
		}
	}
	
	//감소, 바이토닉 
	//감소는 배열의 뒤쪽에서 증가하는 부분 수열의 갯수을 찾았다. 
	for(int i = n; i>0 ; i--){
		dp2[i]=1;
		for(int j = i+1 ; j<=n ;j++)
			if(a[i] > a[j])
				dp2[i] = max(dp2[i], dp2[j]+1);
				
		ans = max(ans , dp1[i] + dp2[i]-1);		
	}	
	cout<<ans;
	return 0;
}

