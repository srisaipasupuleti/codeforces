#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
typedef unsigned long long ull;
ull now(ull n,ull k){
    n-=k;
    ull result;
    for(ull i=1;i<=k;i++){
        result+=now(n,i);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ull t,n,k;
     cin>>t;
     while(t--){
        cin>>n>>k;
        now(n,k);
     }
    
    return 0;
}