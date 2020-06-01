#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        int count=0;
        while(n!=0)
        {
            if(n%10==4){
                count++;
                n=n/10;
            }
            else{
                n=n/10;
            }
        }
        cout<<count<<"\n";
        t--;
    }
    return 0;
}