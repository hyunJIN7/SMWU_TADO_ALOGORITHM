#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin >>n;
	if(n<1 ||n >100) return 0;
	
	for(int i = 0 ; i < 2*n-1 ; i++){
		int l=i;
		if( i > n-1) l= n-(i-n+1)-1;//인덱스0으로 시작해서 1 더  뺌

		//별찍기 
		for(int j = 0 ; j<n-l-1 ; j++){
			cout<<" ";
		}
		for(int k = 0 ; k<l+1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
