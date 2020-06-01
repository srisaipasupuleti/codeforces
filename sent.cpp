#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n,m,i,stop;
    cin>>n>>m;
    
    vector<long long int>v(n);
    vector<long long int>u(m);
    set<long long int>s;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    
    for(i=0;i<m;i++){
        cin>>u[i];
    }
    int flag=0;
    for(i=0;i<n;i++){
        for(long int j=0;j<m;j++){
            if(!s.count(v[i]+u[j])){
                s.insert(v[i]+u[j]);
                cout<<i<<" "<<j<<endl;
            }
           
            if(s.size()==n+m-1){
                flag=1;
                break;   
            }
            if(flag==1)break;
        }
    }
    return 0;
}