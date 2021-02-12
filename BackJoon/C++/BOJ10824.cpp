#include <bits/stdc++.h>
using namespace std;
int main(){
	//string to int  https://blockdmask.tistory.com/333
	//int 범위 넘을 수 있으니 타입 주의 
	string a,b,c,d;
	cin>> a>>b>>c>>d;
	cout << stoll(a+b) +stoll(c+d); 
	return 0;
}
