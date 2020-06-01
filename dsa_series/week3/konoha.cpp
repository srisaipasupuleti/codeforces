#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,z,count;
    vector<int> a ;
    cin>>t;
    while(t--){
        cin>>n>>z;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        make_heap(a.begin(),a.end());
        while(z>0){
            int ma=a.front();
            if(ma==0)break;
            z-=ma;
            count++;
            pop_heap(a.begin(),a.end());
            a.pop_back();
            a.push_back(ma/2);
            push_heap(a.begin(),a.end());
        }
        if(z<=0)
        cout<<count<<"\n";
        else cout<<"Evacuate"<<"\n";
    }
    return 0;
}