#include <iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,j=0;cin>>n;
		int a[n][n];
		for (int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		while(j<=n-1){
			for(int i=0;i<n;i++) cout<<a[j][i]<<" ";
			j++;
			if (j<n)
				for(int i=n-1;i>=0;i--) cout<<a[j][i]<<" ";
					j++;			
		}
		cout<<endl;
	}
	return 0;
}