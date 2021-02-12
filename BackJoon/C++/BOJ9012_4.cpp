//https://www.acmicpc.net/problem/9012 
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char* p,s[51];
	for( scanf("%*d") ; ~scanf("%s",s) ;){
		for(p = s ,n=0 ; n>=0 && *p ; p++ ){
			(*p == '(') ? (n++) : (n--);
		}
		printf( n ? "NO\n" : "YES\n" );
	}
	return 0;
}

