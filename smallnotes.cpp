#include<iostream>
using namespace std;
int small(int n,int* arr){
    if(n>arr[5])
    return 1+small(n-arr[5],arr);
    else
    {
        for(int i=0;i<6;i++){
            if(n==arr[i])
            return 1;
            else
            {
                if(arr[i]>n)
                {
                return 1+small(n-arr[i-1],arr);
                }
            }
        }
    }

}
int main(){
    int t,n;
    int arr[6]={1,2,5,10,50,100};
    cin>>t;
    while(t!=0){
        cin>>n;
        cout<<small(n,arr)<<"\n";
        t--;
    }
    return 0;
}