#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >>t;
    while(t!=0){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[0]+arr[1]<<"\n";
        t--;
    }
	return 0;
}
