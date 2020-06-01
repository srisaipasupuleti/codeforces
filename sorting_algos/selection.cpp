#include<iostream>
using namespace std;
void selection(int* arr,int n){
    int i,small;
    for(i=0;i<n-1;i++){
        small=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[small];
        arr[small]=temp;
    }
}
int main(){
    int* arr=NULL;
    int n,i;
    cin>>n;
    arr=new int[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    i=0;
    while(i!=n){
        cout<<arr[i]<<" ";
        i++;
    }
    delete arr;
    arr=NULL;
    cout<<endl;
    return 0;
}