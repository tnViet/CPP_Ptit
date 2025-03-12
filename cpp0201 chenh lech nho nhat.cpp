#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll a[n];ll res;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int min=a[1]-a[0];
		for (int i=1;i<n;i++){
			res=a[i]-a[i-1];
			if (res<min) min=res;
		}
		cout<<min<<endl;
	}
	return 0;
}