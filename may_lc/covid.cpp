#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,count,diff;
    cin>>t;
    int mi,ma,prev,x;
    while(t--){
        cin>>n;
        mi=INT_MAX;
        ma=INT_MIN;
        count=1;
        prev=-1;
        for(int i=0;i<n;i++){
            cin>>x;
            if(prev==-1)prev=x;
            else{
                diff=x-prev;
                if(diff<=2){
                    count++;
                    
                }
                else{
                    if(count>ma)ma=count;
                    if(count<mi)mi=count;
                    count=1;
                }
                if(i==(n-1)){
                    if(count>ma)ma=count;
                    if(count<mi)mi=count;
                }
                prev=x;
            }
        }
        cout<<mi<<" "<<ma<<"\n";
    }
return 0;
}