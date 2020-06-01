#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n1,n2;
    cin>>k;
    while(k--){
        cin>>n1;
        int s1[n1];
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        cin>>n2;
        int s2[n2];
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        int count1,count2;
        count1=pow(2,n1);
        count2=pow(2,n2);
        for(int i=0;i<count1;i++){
            int sum1=0,sum2=0;
            for(int j=0;j<n1;j++){
                if(i&(1<<j)){
                    sum1+=s1[j];
                }
            }
            for(int k=0;k<count2;k++){
                for(int l=0;l<n2;l++){
                    if(k&(1<<l)){
                        sum2+=s2[l];
                    }
                }
                for(int p;p<n1;p++){
                    for(int q=0;q<n2;q++){
                        if(sum1-s1[p]==sum2-s2[q]){
                            cout<<"1"<<" "<<s1[p]<<"\n";
                            cout<<"2"<<" "<<s2[q]<<"\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}