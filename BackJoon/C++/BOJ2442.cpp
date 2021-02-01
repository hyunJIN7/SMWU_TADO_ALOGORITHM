#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>> n;
	if(n<1 || n > 100) return 0;
	
	for(int i= 0 ; i < n ; i++){
		for(int j=0 ; j < n-i-1;j++){
			cout<<" ";	
		}
		for(int k=0 ; k< 2*(i+1)-1 ; k++){
			cout<<"*";
		}
		//뒤 공백은 출력 필요 없다는 점! 
		if(i != n-1) cout<<"\n";
	}
	return 0;
} 
