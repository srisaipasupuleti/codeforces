#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t,n,a,b,c,r,mi,f;
    cin>>t;
    while(t--){
        mi=INT64_MAX;
        r=0;
        cin>>n>>a>>b>>c;
        for(ll i=0;i<n;i++){
            cin>>f;
            r=abs(f-a)+abs(f-b)+c;
            cout<<r<<" "<<"\n";
            if(r<mi)mi=r;
        }
        cout<<mi<<'\n';
    }
    return 0;
}
