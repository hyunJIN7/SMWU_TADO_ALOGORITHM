// vector array 차이 정리
// https://sueaty.tistory.com/59
// int to string  to_string 
// https://psychoria.tistory.com/708
// vector []로 원소 접근하지말고 바로 push_back하는게 시간 덜 들어 
#include <bits/stdc++.h>
using namespace std;
int main(){
	int N,K,j=0;
	cin >> N >> K;
	vector <int> v;
	for (int i = 1 ; i <=N;i++) v.push_back(i);
	cout<<"<";
	while(--N){
		j = (j + K-1) %  (N+1);
		cout<<  v[j] << ", ";
		v.erase( v.begin() + j);
	}
	cout<<v[0]<<">";
	return 0;	
}
