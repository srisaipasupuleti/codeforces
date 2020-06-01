#include<iostream>
using namespace std;
int main(){
    int t,n,q,i,g;
    cin>>t;
    while (t){
        t--;
        cin>>g;
        while(g){
            g--;
            cin>>i>>n>>q;
            if(i==1){
                if(q==1){
                    cout<<n/2<<"\n";                    
                }
                else{
                    if(n%2==0){
                    cout<<n/2<<"\n";
                    }
                    else{
                    cout<<n/2+1<<"\n";
                    }
                }
            }
            else{
                if(q==1){
                    if(n%2==0){
                    cout<<n/2<<"\n";
                    }
                    else{
                    cout<<n/2+1<<"\n";
                    }
                }
                else{
                    cout<<n/2<<"\n";
                }
        }

    }
}
    return 0;
    }