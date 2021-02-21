#include <bits/stdc++.h>
using namespace std;
int main(void){
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i; m<=n ;m++){
		for(i = 2 ; i*i <= m ; i++)
			if(m%i==0) break;
		if( i*i>m && m !=1 )printf("%d\n",m);
	}
	return 0;
}
