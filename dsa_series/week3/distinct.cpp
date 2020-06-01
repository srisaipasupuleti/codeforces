#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> u(n),v(m);
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    set<long> s;
    long sum;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=u[i]+v[j];
            if(!s.count(sum)){
                s.insert(sum);
                cout<<i<<" "<<j<<"\n";
                count++;
            }
            if(count==(n+m-1))break;
        }
    if(count==(n+m-1))break;
    }
    return 0;
}