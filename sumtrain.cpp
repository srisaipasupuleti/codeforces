#include<iostream>
using namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    while(t!=0){
        cin>>n;
        int arr[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                cin>>arr[i][j];
            }
        }
        for(i=n-1;i>=0;i--){
            for(j=0;j<=i;j++){
                if(arr[i][j]>arr[i][j+1]){
                    arr[i-1][j]+=arr[i][j];
                }
                else{
                    arr[i-1][j]+=arr[i][j+1];
                }
            }
        }
        cout<<arr[0][0]<<"\n";
        t--;
    }
}