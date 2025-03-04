#include <iostream>
using namespace std;
int main(){
	int t;long long n,a,b,a1,b1,bc;
	cin>>t;
	while(t--){
		cin>>n;bc=2;
		for (int i=2;i<n;i++){
			a=bc;b=i+1;a1=a;b1=b;
			while (a1*b1!=0){
				if (a1>b1) {
					a1=a1%b1;
				} else {
					b1=b1%a1;
					}
			}
			if (a1==0) {
				a1=b1;
			} 
			bc=a*b/a1;
			
		}
		if (n==1){cout<<1<<endl;
		} else
		cout<<bc<<endl;
	}
	return 0;
}