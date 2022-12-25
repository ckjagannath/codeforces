#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        string s;
        cin>>s;
        long long max0=0, max1=0;
        long long x=0, y=0, c0=0, c1=0;
        for(int j=0; j<n; j++){
            if(s[j]=='1'){
                y++;
                c0=0;
                c1++;
            }
            else{
                x++;
                c0++;
                c1=0;
            }
            max0=max(max0, c0);
            max1=max(max1, c1);
        }
        long long ans=0;
        ans=max(ans, x*y);
        ans=max(ans, max0*max0);
        ans=max(ans, max1*max1);
        cout<<ans<<endl;
    }
    return 0;
}
