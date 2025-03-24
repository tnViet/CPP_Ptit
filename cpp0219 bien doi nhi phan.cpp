#include <iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n][m];int b[n][m]={};
		for (int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		
		for (int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					for (int a=0;a<n;a++)	b[a][j]=1;
					for (int c=0;c<m;c++)	b[i][c]=1;
				}
			}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<b[i][j]<<" ";
		cout<<endl;
	}
	}
	
	return 0;
}