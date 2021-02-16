#include <bits/stdc++.h>
using namespace std;
int main(){
	string n,ans;
	cin>>n;
	int len = n.size();
	if( len %3 == 1)
		cout<<n[0]; // 여긴 -'0' 필요 없음 그대로 출력 나머지는 연산 때문에 
	else if(len%3==2) cout <<( n[0] -'0')*2 + (n[1] -'0') ;
	for(int i = len%3 ; i < len ; i+=3 )
		cout << ( n[i]-'0') * 4 + (n[i+1]-'0')*2 + (n[i+2] -'0');
	return 0;
}
