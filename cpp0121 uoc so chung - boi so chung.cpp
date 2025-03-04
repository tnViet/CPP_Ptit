#include <iostream>
using namespace std;
int main(){
	int t; 		long long a,a1,b1,b;
	cin>>t;
	while (t--){
		cin>>a>>b;
		a1=a;b1=b;
		while(a1!=b1){
			if (a1>b1) {
				a1=a1-b1;
			} else {
			b1=b1-a1;}
		}		
		cout<<a*b/a1<<" "<<a1<<endl;
	}
	return 0;
}