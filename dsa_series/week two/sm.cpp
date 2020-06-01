#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    ll max=0;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>::iterator it;
    while(!a.empty()){
        it=min_element(a.begin(),a.end());
        max+=(*it)*a.size();
        for(vector<ll>::iterator it1=a.begin();it1!=it;it1++){
            (*it1)-=(*it);
        }
        a.erase(it,a.end());
    }
    cout<<max<<"\n";
    }
    return 0; 
}