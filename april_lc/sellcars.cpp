#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    const unsigned int M=1000000007;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        int sum=0;
        int j;
        for(int i=0;i<n;i++){
            j=a[i]-i;
            if(j<=0){
                break;
            }
            else{
                sum=(sum+j)%M;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}