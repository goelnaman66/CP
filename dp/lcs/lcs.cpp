#include<bits/stdc++.h>

using namespace std;


int dp[1001][1001];
    int lcs(string &s1, string &s2, int i, int j){
        if(i==s1.size() or j==s2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(s1[i]==s2[j]){
            ans= 1+lcs(s1,s2,i+1,j+1);
        }
        else{
            ans= max(lcs(s1,s2,i+1,j),lcs(s1,s2,i,j+1));
        }
        return dp[i][j]=ans;
}


signed main(){
    string s1,s2;
    cin>>s1>>s2;
    memset(dp,-1,sizeof(dp));
    cout<<lcs(s1,s2,0,0);
}
