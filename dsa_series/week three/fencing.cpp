#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,m,k;
    int ax[]={0,1,0,-1},ay[]={1,0,-1,0};
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        set<pair<int,int>> s;
        int sum=0;
        while(k--){
            int x,y;
            cin>>x>>y;
            for(int i=0;i<4;i++){
                int nx,ny;
                nx=x+ax[i];
                ny=y+ay[i];
                sum+=s.count(make_pair(nx,ny))?-1:1;
            }
            s.insert(make_pair(x,y));
        }
        cout<<sum<<"\n";
    }
    return 0;
}