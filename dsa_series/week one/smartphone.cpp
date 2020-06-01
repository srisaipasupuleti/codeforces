#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int* arr=new long long int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int max=0;
    long long int t;
    for(int i=0;i<n;i++){
        t=arr[i]*(n-i);
        if(t>max){
            max=t;
        }
    }
    cout<<max<<"\n";
    return 0;
}