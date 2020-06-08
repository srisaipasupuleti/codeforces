#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p;
        int loss=0;
        while(n--){
            cin>>p;
            if(p>k){
                loss+=(p-k);
            }
        }
        cout<<loss<<"\n";
    }
    return 0;
}