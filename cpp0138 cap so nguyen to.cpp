#include <iostream>
#include <cmath>
using namespace std;
int t,n,kt;
int nt(int a){
	if (a==2) return 1;
	for (int i=2;i<=sqrt(a)+1;i++){
		if (a%i==0) 
			return 0;		
	}
	return 1;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;kt=0;
		for (int i=2;i<=n/2;i++){
			if (nt(i)==1){
				if (nt(n-i)==1){
					cout<<i<<" "<<n-i<<endl;
					kt=1;
				}
				if (kt==1) break;
			}
		}	
		if (kt==0) cout<<""<<endl;
	}
	return 0;
}
