map<char,int> mp;
int n=queries.size(),x,y;
char l=0;
for(int i=0;i<n;i++){
    x=q[i][0];y=q[i][1];
    for(int j=x;i<=y;j++){
        if((s[j]>=65)&&(s[j]<=90)){
            mp[s[j]+32]++;
        }
        else mp[s[j]]++;
        if(l<s[j])l=s[j];
    }
    cout<<mp[l]<<"\n";
}
