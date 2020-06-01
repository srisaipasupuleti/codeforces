#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,min,temp;
    long long sum,moves;
    cin>>t;
    while(t--){
        moves=0;sum=0;
        min=INT32_MAX;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>temp;
            sum+=temp;
            if(temp<min)min=temp;
        }
        moves=sum-1LL*(n)*min;
        cout<<moves<<"\n";
    }
    return 0;
}