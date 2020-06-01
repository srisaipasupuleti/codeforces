#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,q,c,sum;
    string s;
    map<char,int>mp;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>q;
        cin>>s;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        while(q--){
            cin>>c;
            sum=0;
            for(auto i:mp){
               if(i.second>c)sum+=(i.second-c);
            }
            cout<<sum<<"\n";

        }
        mp.clear();
    }
    return 0;
}