#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    int lead_a=0;
    int lead_b=0;
    int ca=0;
    int cb=0;
    int mla=0;
    int mlb=0;
    cin>>n;
    while(n!=0){
        cin>>a>>b;
        ca+=a;
        cb+=b;
        if(ca>cb){
            int t=ca-cb;
            if (t>mla){
                mla=t;
            }
            lead_a=lead_a+(ca-cb);
        }
        else if(cb>ca){
            int t=cb-ca;
            if (t>mlb){
                mlb=t;
            }
            lead_b=lead_b+(cb-ca);
        }
        n--;
    }
    if(lead_a>lead_b){
        cout<<"1"<<" "<<mla<<"\n";
    }
    else if(lead_a<lead_b){
        cout<<"2"<<" "<<mlb<<"\n";
    }
    return 0;
}