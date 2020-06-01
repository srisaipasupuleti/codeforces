#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    char str[n];
    //for(int i=0;i<n;i++){
    //    cin>>str[i];
    //}
    //cout<<str[2];
    int count=0,max=0,index1=0,last,length=0,maxlength=0,index=0,sindex;
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]=='1'){
            count++;
            last=i;
            if(count==1)
            sindex=i;
        }
        else{
            count--;
        }
        if(count>max){
            max=count;
            index1=last;
        }
        if(count!=0){
            length++;
        }
        else if(count==0){
            length++;
            if(length>maxlength){
            maxlength=length;
            index=sindex+1;
            }
            length=0;
        }
    }
    cout<<max<<" ";
    cout<<index1+1<<" ";
    cout<<maxlength<<" ";
    cout<<index<<"\n";
    return 0;
}