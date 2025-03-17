#include <iostream>
using namespace std;
int main(){
	int t,n,q,l,r;
	cin>>t;
	while(t--){
		cin>>n>>q;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		while(q--){
			cin>>l>>r;
			int tong=0;
			for (int i=l-1;i<r;i++){
				tong+=a[i];
			}
			cout<<tong<<endl;
		}
	}
	return 0;
}