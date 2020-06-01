#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        while(n!=0){
            count+=n/5;
            n=n/5;
        }
        cout<<count<<"\n";
    }
    return 0;
}