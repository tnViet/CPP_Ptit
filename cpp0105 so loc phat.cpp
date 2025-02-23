#include <iostream>
using namespace std;
int main(){
int n,t,kt,n1;
cin >>t;
while (t--){
cin>>n;kt=1;
while (n!=0){
n1=n%10;
if (n1!=6) 
{if (n1!=8)
{if (n1!=0){kt=0;
}
}
}
;n=n/10;
 
};if (kt==1) cout<<"YES"<<endl; else cout<<"NO"<<endl;

};	return 0;
}