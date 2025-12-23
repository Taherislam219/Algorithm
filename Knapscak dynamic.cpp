#include<bits/stdc++.h>
using namespace std;

int main(){

int n,W;

cout<<"Enter Items :";cin>>n;
cout<<"Enter Capacity :";cin>>W;

int w[n],p[n];

for(int i=0;i<n;i++){

    cout<<"Enter Weight "<<i+1<<":";cin>>w[i];
    cout<<"Enter Profit "<<i+1<<":";cin>>p[i];

}

int dp[n+1][W+1];

for(int i=0;i<=n;i++){
    for(int j=0;j<=W;j++){
        if(i==0 || j==0){
            dp[i][j]=0;
        }
        else if(w[i-1]<=j){
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+p[i-1]);
        }
        else{
            dp[i][j]=dp[i-1][j];
        }
    }
}

cout<<"Maximum value ="<<dp[n][W]<<endl;

return 0;
}
