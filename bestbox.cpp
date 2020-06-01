#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double t,p,s,l,v;
    cin>>t;
    while(t--){
        cin>>p>>s;
         l=(p-sqrt(pow(p,2)-24*s))/12;
         v=(l*l*l)-(p*l*l)/4+s*l/2;
         cout<<fixed<<setprecision(2)<<v<<"\n";
    }
    return 0;
}