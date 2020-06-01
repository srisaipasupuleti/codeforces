#include<bits/stdc++.h>
using namespace std;
int dist(int x1,int x2,int y1,int y2){
    return pow(x1-x2,2)+pow(y1-y2,2);
}
bool isrt(int x1,int x2,int x3,int y1,int y2,int y3){
    int d1,d2,d3;
    d1=dist(x1,x2,y1,y2);
    d2=dist(x2,x3,y2,y3);
    d3=dist(x3,x1,y3,y1);
    int md=max(d1,max(d2,d3));
    if(md==d1)
        return d1==d2+d3;
    if(md==d2)
        return d2==d3+d1;
    if(md==d3)
        return d3==d1+d2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,count=0;
    cin>>t;
    int x1,x2,x3,y1,y2,y3;
    while(t--){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(isrt(x1,x2,x3,y1,y2,y3))
        count++;
    }
    cout<<count<<"\n";
    return 0;
}