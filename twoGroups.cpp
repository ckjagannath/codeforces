#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int abs_diff(int i, int j){
    if(i+j>0) return i+j;
    return -1*(i+j);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double totsum=0;
        while(n--){
            int temp;
            cin>>temp;
            totsum+=temp;
        }
        if(totsum<0) totsum=-1*totsum;
        cout<<(long long)totsum<<endl;
    }
    return 0;
}
