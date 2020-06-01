#include<iostream>
using namespace std;
int main(){
    string one;
    string two;
    getline(cin,one);
    getline(cin,two);
    int l1=one.length();
    int l2=two.length();
    if(one[l1-1]!=two[l2-1]){
        cout<<l1+l2<<"\n";
    }
    else{
        l1--;l2--;
        while(one[l1-1]==two[l2-1]){
            l1--;l2--;
            }
        cout<<l1+l2<<"\n";
        }
    return 0;
}