#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for (int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		cout<<a[n-1]<<endl;
	}
	return 0;
}