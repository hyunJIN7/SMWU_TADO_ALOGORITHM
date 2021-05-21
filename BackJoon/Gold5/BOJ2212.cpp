#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,ans=0;
	scanf("%d %d",&n,&k);
	if(k>=n) {
		printf("0\n");
		return 0;
	}
	vector<int>sensor,dist;
	for(int i = 0,loc ; i < n ;i++) {
		scanf("%d",&loc);
		sensor.push_back(loc);	
	}
	sort(sensor.begin(),sensor.end()); // 센서 위치 정렬 
	sensor.erase(unique(sensor.begin(),sensor.end()),sensor.end());//중복제거
	
	for(int i = 0 ; i < sensor.size()-1;i++){
		dist.push_back(sensor[i+1]-sensor[i]);
	} 
	sort(dist.rbegin(),dist.rend());
	for(int i =k-1;i<dist.size();i++){
		ans+=dist[i];
	}
	printf("%d\n",ans);
} 
/*
 센서의 위치기반으로 막대를 만들고
 막대 사이의 거리를 구함
 막대가 다 연결되어 있다 생각한다음
 그 센서 사이의 연결을 끊어서 k개의 막대를 만드는거지
 그러기 위해 각 센서 사이 거리 구해서 내림 차순 정렬 후
 길이 긴 순으로 k-1개 제거 후 남은 것들의 합을 구하면 답  
 */
