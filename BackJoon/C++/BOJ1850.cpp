#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	int d;
	scanf("%lld %lld",&a,&b);
	d = __gcd(b,a);
	while(d--) printf("1");
	return 0;
}
 
