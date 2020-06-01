#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    long long n,k;
    while(t--){
        cin>>n>>k;
        if(k==0)cout<<0<<" "<<n<<"\n";
        else
        cout<<n/k<<" "<<n%k<<"\n";
    }    
    return 0;
}