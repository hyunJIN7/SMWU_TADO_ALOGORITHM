#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int ans=1;
		//vector<pair<int,int>> v;
		pair<int,int> empoly[MAX];
		scanf("%d",&n);
		for(int i = 0 ; i < n ;i++){
			scanf("%d %d",&empoly[i].first,&empoly[i].second);
		}
		sort(empoly,empoly+n);
		
		int interviewRank = empoly[0].second;
		for(int i=1;i<n;i++){
			if(empoly[i].second < interviewRank){
				ans++;
				interviewRank = empoly[i].second;
			}
		}
		printf("%d\n",ans);	
	}	
}
