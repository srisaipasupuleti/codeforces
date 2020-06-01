#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=o;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd){
        cout<<"READY FOR BATTLE"<<"\n";
    }
    else{
        cout<<"NOT READY"<<"\n";
    }
    return 0;
}