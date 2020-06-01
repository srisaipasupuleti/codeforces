#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,a=1,b=0;
    cin>>t;
    while(t--){
        a=0;b=1;
        cin>>n;
        while(1){
            int m=0,flag;
            for(int i=1;i<n;i++){
                flag=1;
                for(int i=2;i<n;i++){
                    if(n%i==0)flag=0;
                }
                if(flag==1){
                    if(m<i)m=i;
                }
            }
            if(m==0)break;
            n-=m;
            if(a==1){
                a=0;b=1;
            }
            else{
                a=1;b=0;
            }
            
        }
        if(a==1)cout<<"ALICE\n";
        else cout<<"BOB\n";
    }
    return 0;
}