#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	if(N < 1 || N >100) return 0;  
	for(int i=0 ; i<N;i++){
		for(int k=0 ; k < i ; k++)
			cout<<" ";
		for(int j= 0 ; j< N-i;j++)
			cout<<"*";
		if(i != N-1) cout<<"\n";	
	}
	return 0;
}

