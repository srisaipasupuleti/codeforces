//time complexity=O(n*m)
//space complexity=O(1)
#include<iostream>
#include<string>
using namespace std;
int search(string pat,string text){
    //cout<<pat[1];
    int m=pat.length(),j;
    //cout<<n;
    int n=text.length();
    for(int i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(text[i+j]!=pat[j])
            {
              //  cout<<pat[j]<<"\t"<<text[i+j]<<"\t"<<j<<"\n";
                break;
            }
        }
        if(j==m)
        {
            cout<<"found at"<<" "<<i<<"\n";
        }
    }
}
int main(){
    string pat,text;
    int size,n;
    cin>>size;
    cin>>n;
    int i=0;
    while(size!=0){
        cin>>text[i++];
        size--;
    }
    i=0;
    int j=size;
    while(j!=0){
        cout<<text[i++];
        j--;
    }
    cout<<"\n";
    while(n!=0){
    getline(cin,pat);
    search(pat,text);
    n--;
    }
    //cout<<pat<<"\n"<<text<<"\n";
    return 0;
}