#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    ll n,m;
    cin>>t;
    while(t--){
        cin>>m>>n;
        for(ll i=m;i<=n;i++){
            if(i==1)continue;
            if(isprime(i)==1)cout<<i<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}