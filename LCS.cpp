#include<bits/stdc++.h>
using namespace std;

int main(){

string s1,s2;
cout<<"Enter 1st string: ";cin>>s1;
cout<<"Enter 2nd string: ";cin>>s2;

int n=s1.length();
int m=s2.length();

int LCS[n+1][m+1];
for(int i=0; i<=n;i++){
    for(int j=0;j<=m;j++){
        LCS[i][j]=0;
    }
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(s1[i-1]==s2[j-1]){
            LCS[i][j]=1+LCS[i-1][j-1];
        }
        else{
            LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
        }
    }
}
cout<<"Length of LCS :"<<LCS[n][m]<<endl;

int i=n,j=m;
string lcs="";

while(i>0 && j>0){
    if(s1[i-1]==s2[j-1]){
        lcs+=s1[i-1];
        j--;
        i--;
    }

    else if(LCS[i-1][j]>LCS[i][j-1]){
        i--;
    }
    else{
        j--;
    }
}

reverse(lcs.begin(),lcs.end());
cout << "LCS string: " << lcs << endl;

return 0;
}

