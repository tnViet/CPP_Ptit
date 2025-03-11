#include <iostream>
using namespace std;
int main(){
	int t,a,m,kt;
	cin>>t;
	while(t--){
		cin>>a>>m;kt=0;
		for(int i=0;i<=m-1;i++){
			if((a*i)%m==1) {
				cout<<i<<endl;
				kt=1;
				break;
			}
		}
		if (kt==0) cout<<"-1"<<endl;
	}
	return 0;
}