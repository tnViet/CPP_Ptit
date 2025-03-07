#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int i=2,kt=0,dem=0;
		while(n!=1){
			if(n%i==0)
				while(n%i==0){
					dem++;
					n/=i;
					if (dem==k) {
						cout<<i<<endl;
						kt=1;
					break;
					}
				}
			else i++;
		if(kt==1) break;
		}
	if (kt==0) cout<<-1<<endl;		
	}
	
	return 0;
}