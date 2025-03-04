#include <iostream>
using namespace std;
int main(){
	int n,d,i,n1,kt;
		cin>>n;i=2;n1=n;kt=0;
		if (n==2){cout<<"2 1";}
		else{		
			while(i<=n/2){
				d=0;
				if (n1%i==0){
					kt=1;
					while((n1%i==0)&&(n1>0)){
					d++;
					n1=n1/i;
					}
				cout<<i<<" "<<d<<endl;	
				}
				i++;	
			}
			if (kt==0) cout<<n<<" 1";
		} 
	
	return 0;
}