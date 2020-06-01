#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    cin>>n;
    char s[2*n];
    while(t--){
        int as=0,bs=0,l,i,j;
        cin>>s;
        for(i=0,j=1;i<2*n,j<=2*n;i++,j++){
            if(!(i&1)){
                if(s[i]&1) as+=1;
            }
            else{
                if(s[i]&1) bs+=1;
               // cout<<as<<" "<<bs<<"\n";
            }
            if(!(j&1)){
                l=(n-j/2);
                if(abs(as-bs)>l){
                    cout<<j<<"\n";
                    break;
                }
                else if(j==2*n){
                    cout<<j<<"\n";
                }
            }
        }
    }
    return 0;
}