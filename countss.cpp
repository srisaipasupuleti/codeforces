#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')count++;
        }        
        ll ans=count+(1LL*(count-1)*count/2);
        cout<<ans<<"\n";
        s.clear();
    }
    return 0;
}