#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    int r;
    while(t!=0){
        cin>>a>>b>>c;
        if(a>b&&a>c){
            if(b>c)
            r=b;
            else
            {
                r=c;
            }
        }
        else if(b>a&&b>c){
            if(a>c)
            r=a;
            else
            {
                r=c;
            }
        }
        else if(c>b&&c>a){
            if(b>a)
            r=b;
            else
            {
                r=a;
            }
        }
        cout<<r<<"\n";
        t--;
    }
    return 0;
}