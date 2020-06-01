#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
    ull t,x,y,l,r,b,z,f,ans,i,j,p,q;
    cin>>t;
    while(t--){
        cin>>x>>y>>l>>r;
        z=x|y;
        if(x==0||y==0)x=l;
        else if(l==r)z=l;
        else if(l==0){
            if(r>=z)z=z;
        }
        cout<<z<<"\n";

       /* i=1,j=1;
        while(1){
            f=((x&i)*(y&i));
            if(f==ans)break;
            j++;
            i=pow(2,j)-1;
        }
        b=pow(2,j);
        p=(l+1)/b;
        q=(r+1)/b;
        if(p==q){
            if((l+1)%b==0)z=l;
            else{
                for(ull k=r;k>=l;k--){
                    f=((x&k)*(y&k));
                    if(f){
                        z=k;break;
                    }
                }
            }

        }
        else if((q-p)>=1){
            if((l+1)%b==0)z=l;
            else if((r+1)%b==0)z=r;
            else{
                z=((p+1)*b)-1;
            }
        }
        if(z==-1)z=l;
        cout<<z<<"\n";*/
    }
    return 0; 
}