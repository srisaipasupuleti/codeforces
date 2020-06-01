#include<iostream>
using namespace std;
#define max_size 1000000
int main(){
    int arr[max_size]={0};
    int i,t,temp;
    cin>>t;
    int p=t;
    while(t!=0){
        cin>>temp;
        arr[temp]++;
        t--;
    }
    for(i=0;i<max_size;i++){
        if(arr[i]>0){
            while(arr[i]!=0){
                cout<<i<<"\n";
                arr[i]=arr[i]-1;
            }
        }
    }
    return 0;
}