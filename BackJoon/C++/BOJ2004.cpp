#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n[3],ans1=0,ans2=0;
	cin>>n[0]>>n[1];
	n[2] = n[0]-n[1];
	
	for(int i=0;i<3;i++){
		long long tmp=n[i],sum=0;
		for(long long i = 2 ; i <= tmp; i*=2)
			sum += tmp/i;
		(i>0) ? ans1= ans1-sum : ans1= ans1+sum;
		cout << ans1<<"\n";
		sum=0,tmp=n[i];
		for(long long i = 5 ; i <= tmp; i*=5)
			sum += tmp/i;
		(i>0) ? ans2= ans2-sum : ans2= ans2+sum;
	}

	cout << min(ans1,ans2)<<"\n";	
	return 0;
}
