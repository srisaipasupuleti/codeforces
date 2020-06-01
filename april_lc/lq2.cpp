#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        stack <int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                s.push(i);
            }
        }
        int t1,t2,f=1;
        while(s.size()!=1){
            t1=s.top();
            s.pop();
            t2=s.top();
            if((t1-t2)<6){
                cout<<"NO"<<"\n";
                f=0;
                break;
            }
        }
        if(f==1){
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}