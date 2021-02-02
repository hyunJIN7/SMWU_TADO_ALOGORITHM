#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	if(n<1 || n>100)
		return 0;
		
	for(int i = 0 ; i < 2*n-1 ;i++){
		int l = i;
		if(i>n-1){
			l = 2*n-2-l;
		}

		
		for(int j = 0; j<l ; j++){
			cout<<" ";
		}
		for(int k=0; k < (n-l)*2-1 ; k++){
			cout<<"*";
		}
		cout<<"\n";	
	}	
	
	return 0;
}

