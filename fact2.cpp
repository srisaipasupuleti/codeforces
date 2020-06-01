#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
cpp_int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int t,n;
    cpp_int r;
    cin>>t;
    while(t!=0){
        cin>>n;
        r=fact(n);
        t--;
    }
return 0;
}