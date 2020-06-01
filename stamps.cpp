#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    ll sum=0,t;
    for(int i=0;i<n;i++){
        cin>>t;
        sum+=t;
    }
    ll req=1LL*n*(n+1)/2;
    if(req==sum)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}