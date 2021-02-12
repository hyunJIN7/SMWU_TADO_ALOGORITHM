#include <bits/stdc++.h>

using namespace std;

int main(){
	char cmd[6];
	queue <int> q; // queue 대신 int f,b 변수로 처리 가능 
	int t=0;
	for(scanf("%*d"); ~scanf("%s",cmd) ; ){
		if(!strcmp(cmd,"push")){
			int x;
			scanf("%d",&x);
			q.push(x);
		}
		else if(!strcmp(cmd,"pop")){	
			if(!q.empty()){
				printf("%d\n",q.front());
				q.pop();
			}
			else printf("-1\n");	
		}
		else if(!strcmp(cmd,"size")){
			printf("%d\n",q.size());	
		}
		else if(!strcmp(cmd,"empty")){
			printf(q.empty() ? "1\n":"0\n");
		}
		else if(!strcmp(cmd,"front")){
			q.empty() ? printf("-1\n") : printf("%d\n",q.front());
		}
		else{
			q.empty() ? printf("-1\n") : printf("%d\n",q.back());			
		}		
	}
	
	return 0;
}
