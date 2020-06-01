#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int last=-1,flag=1;
        int i;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                if(last==-1){
                    last=i;
                }
                else{
                    if((i-last)<6){
                        cout<<"NO"<<"\n";
                        flag=0;
                        break;
                    }
                    last=i;
                }
            }
        }
        if(flag==1){
        cout<<"YES"<<"\n";            
        }
    }
    return 0;
}