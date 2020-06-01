#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    ull a,b,c,s;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        s=a+b+c;
        cout<<s/2<<"\n";
        s=0;
    }
    return 0;
}