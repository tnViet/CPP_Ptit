#include <iostream>
using namespace std;

int main(){
	int t,n,a[100001],max;
	cin>>t;
	while (t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		max=a[1];
		for(int i=2;i<=n;i++){
			if(a[i]>max)
				swap(max,a[i]);
		}
		cout<<max<<endl;
	}
	return 0;
}