#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,n,d,i,n1;
	cin>>t;
	while(t--){
		cin>>n;i=2;n1=n;
		
		while(i<=n){
			d=0;
			if (n1%i==0){
				while((n1%i==0)&&(n1>0)){
					d++;
					n1=n1/i;
				}
			cout<<i<<" "<<d<<" ";	
			}
			i++;	
		}
		cout<<endl;
	}	
	return 0;
}