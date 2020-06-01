#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>n/2)k=n-k;
        int w[n];
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        sort(w,w+n);
        ll ans=0;
        for(int i=0;i<k;i++){
            ans+=1LL*w[i];
        }
        ll ans2=0;
        for(int i=k;i<n;i++){
            ans2+=1LL*w[i];
        }
        cout<<abs(ans2-ans)<<"\n";
        w[0]={0};
    }
    return 0;
}