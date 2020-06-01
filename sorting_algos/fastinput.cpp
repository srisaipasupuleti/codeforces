#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    clock_t begin=
    clock();
    int i=1000000;
    while(i){
        int j=100;
        j++;
        i--;
    }
    clock_t end=clock();
    cout<<(double)(end-begin)/CLOCKS_PER_SEC<<"\n";
    return 0;
}