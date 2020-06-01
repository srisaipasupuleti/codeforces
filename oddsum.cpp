#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
void pri(vector<ull> a,int n,int k){
    int count=0;
    ull s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        if(s%2!=0){
            if(count==(k-1)){
                cout<<n;
                break;
            }
            else
            cout<<i+1<<" ";
            s=0;
            count++;
        }
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,k;
    cin>>t;
    ull temp,sum;
    vector<ull> a ;
    while(t--){
        sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>temp;
            a[i]=temp;
            sum+=temp;
        }
        if((k%2)!=0){
            if((sum%2)!=0){
                cout<<"YES\n";
                pri(a,n,k);
            }
            
            else
            cout<<"NO\n";
        }
        else{
            if((sum%2)!=0)
            cout<<"NO\n";
            else{
                cout<<"YES\n";
                pri(a,n,k);
            }
        }
        a.clear();
    }
    return 0;
}