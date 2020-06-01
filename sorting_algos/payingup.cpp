#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        int d[n];
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        for(int i=0;i<pow(2,n);i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    sum+=d[j];
                }
            }
            if(sum==s)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
        
    }
    return 0;
}