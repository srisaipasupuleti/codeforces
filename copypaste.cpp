#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    map<int,int> mp;
    int temp;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
        cin>>temp;
        mp[temp]++;
    }
    cout<<mp.size()<<"\n";
    mp.clear();
    }
    
    return 0;
}