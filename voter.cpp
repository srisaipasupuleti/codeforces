#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i=3,n=0,t,count=0;
    while(i--){
        cin>>t;
        n+=t;
    }
    map<int,int> m;
    for(i=0;i<n;i++){
        cin>>t;
        m[t]++;
    }
    map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        if(itr->second>=2)
        count++;
    }
    cout<<count<<"\n";
    for(itr=m.begin();itr!=m.end();itr++){
        if(itr->second>=2)
        cout<<itr->first<<"\n";
    }
    return 0;
}