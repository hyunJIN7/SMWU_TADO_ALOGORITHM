#include <bits/stdc++.h>

using namespace std;

int main(){
	int ans = 0;
	char c[100001];
	scanf("%s",c);
	for(int i = 0 ,sticks=0, len = strlen(c); i < len ; i++){		
		if( *(c+i)== '('){
			if(*(c+i+1)== ')' ){
				//레이저인 경우 
				ans += sticks;
				i++;
			}
			else{ // (( 인 경우  : 막대 시작 
				sticks++;
				ans++;
			}
		}
		else{// ) 레이저아닌 막대 끝 
			sticks--; 
		}
	}
	printf("%d",ans);
	return 0;
}
