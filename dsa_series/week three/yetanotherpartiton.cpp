#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie (NULL);cout.tie(NULL);
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>s;
    s.insert(1);
    for(int i=1;i<n;i++){
        if(a[i]%a[i-1]!=0){
            s.insert(i+1);
        }
    }
    while(q--){
        int type,i,A;
        cin>>type;
        if(type==1){
            cin>>i>>A;
            s.insert(i);
            s.insert(i+1);
            i--;
            a[i]=A;
            if(a[i]%a[i-1]==0)s.erase(i+1);
            else if(a[i+1]%a[i]==0)s.erase(i+2);
        }
        else{
            int index;
            cin>>index;
            auto it=s.upper_bound(index);
            it--;
            cout<<*it<<"\n";
            }
    }
    return 0;
}