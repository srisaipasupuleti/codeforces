#include<iostream>
using namespace std;
int mms(int n,int* arr){
    int i;
    if(n>arr[11]){
        return 1+mms(n-arr[11],arr);
    }
    for(i=0;i<12;i++){
            if(n==arr[i]){
                return 1;
            }
        }
    for(i=0;i<12;i++){
        if(arr[i]>n){
            return 1+mms(n-arr[i-1],arr);
        }
    }
}
int main()
{
    int t,n;
    cin>>t;
    int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    while(t!=0){
        cin>>n;
        int r=mms(n,arr);
        cout<<r<<"\n";
        t--;
    }
    return 0;
}