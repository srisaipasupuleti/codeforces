#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        if(n<10){
            cout<<"What an obedient servant you are!"<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        t--;
        
    }
    return 0;
}
