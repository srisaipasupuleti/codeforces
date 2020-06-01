#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int max(int a,int b){
//    return a>b?a:b;
//}
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll res=0,j=0;
        ll *a=new ll[n];
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp.size()<k){
                res=max(res,i-j+1);
            }
            else{
                while(mp.size()==k&&j<i){
                    if(mp[a[j]]==1){
                        mp.erase(a[i]);
                        j++;
                        break;  
                    }
                    else mp[a[j]]--;
                    j++;
                }
                res=max(res,i-j+1);                
            }
            }
            cout<<res<<"\n";
    } 
    return 0;
}