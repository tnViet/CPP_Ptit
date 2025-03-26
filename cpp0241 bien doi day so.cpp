// https://code.ptit.edu.vn/student/question/CPP0241

#include <bits/stdc++.h>
using namespace std;

void solve(){
int n; cin >> n;
int a[n];
for(int i=0; i<n; i++)
    cin >> a[i];
    int l=0, r=n-1, cnt=0;
    while(l<r){
        if(a[l]!=a[r]){
            if(a[l]<a[r]){
                l++;
                a[l]+=a[l-1];
                cnt++;
            }else{
                r--;
                a[r]+=a[r+1];
                cnt++;
            }
        }else{
            l++;r--;
        }
    }
    cout << cnt <<endl;
}
int main(){
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}