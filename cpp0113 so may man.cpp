#include <iostream>
using namespace std;
int t,n1,n2,kt;long long n;
int main(){
	cin >>t;
	while (t--){
		cin>>n;kt=0;
			n1=n%10;
			n=n/10;
			n2=n%10;
			if((n1==6)&&(n2==8)){
				kt=1;
			}
			cout<<kt<<endl;
			
	}
	return 0;
}