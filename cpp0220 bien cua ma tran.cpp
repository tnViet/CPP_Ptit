#include <iostream>
using namespace std;
int main(){
	short t;cin>>t;
	while(t--){
		short n;cin>>n;
		short a[n*n];
		for (int i=0;i<n*n;i++) cin>>a[i];
		
		for (int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		short j=n;
		while(j<n*n-n-1){
			cout<<a[j]<<" ";
			for (int i=0;i<n-2;i++) cout<<"  ";
			cout<<a[j+n-1];
			cout<<endl;
			j+=n;
		}
		for (int i=n*n-n;i<n*n;i++) cout<<a[i]<<" ";
		cout<<endl;
		
	}
	return 0;
}