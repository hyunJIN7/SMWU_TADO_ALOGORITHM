#include <bits/stdc++.h>

using namespace std;


int main(){
	
	scanf("%*d");
	for(int n,m ; ~scanf("%d %d",&n,&m);  ) {
		int ans=0;
		vector<int> lt; // 우선순위만 모음 
		queue <pair<int,int>> printer;
		for(int i = 0,prior ; i < n ; i++) {
			scanf("%d",&prior);
			lt.push_back(prior);
			printer.push({i,prior});
		}
		sort( lt.begin(), lt.end(), greater<int>() );
		//printf("=>%d\n",lt[0]);
		while(lt.size()){
			pair<int,int> fr = printer.front();
			printer.pop();
			if(lt[0] == fr.second){
				ans++;
				if(m == fr.first){
					printf("%d\n",ans);	break;
				} 
				lt.erase(lt.begin());
				
			}
			else{
				printer.push(fr);
			}	
		}
			
		
	}
	
	
	
}
