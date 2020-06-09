#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
    int ts,ans=0;
    cin>>ts;
    if(ts&1){
        ans=ts/2;
    }
    else{
        while(!(ts&1)){
            ts=ts/2;
        }
        ans=ts/2;
    }
    cout<<ans<<"\n";      
    }
    return 0;
}