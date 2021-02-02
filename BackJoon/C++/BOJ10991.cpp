#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<1 || n>100)
		return 0;
		
	for(int i = 0 ; i < n ; i++){
		for(int k = i ; k <n-1 ; k++){
			cout<<" ";
		}
		for(int j = 0 ; j <=i ;j++){
			cout<<"* ";
			//if(j!=i) cout<<" ";
		}
		cout<<"\n";	
	}	
	return 0;
}
