#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin >>n;
	if(n<1 ||n >100) return 0;
	 
	for(int i = 0 ; i < 2*n-1 ; i++){
		float l = i;
		if(i > n-1) l = 2*n-l-2;//이것만 잘 조정해서 값 만들기  

//별 만드는 틀 만들어 놓고  
		for(int j = 0; j <= l ; j++){
			cout<<"*";

		}
		for(int k = 0 ; k < (n-l-1)*2  ; k++){
			cout<<" ";
		}
		for(int j = 0; j <= l  ; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0; 
}
