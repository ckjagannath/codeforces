#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, q;
        cin>>n>>q;
        int oddCount=0, evenCount=0;
        long long sums=0;
        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;
            if(temp%2==0){
                sums+=temp;
                evenCount+=1;
            }
            else{
                sums+=temp;
                oddCount+=1;
            }
        }
        for(int j=0; j<q; j++){
            int type, xj;
            cin>>type>>xj;
            if(xj%2==0){
                if(type==0){
                    sums+=evenCount*xj;
                }
                else{
                    sums+=oddCount*xj;
                }
            }
            else{
                if(type==0){
                    sums+=evenCount*xj; 
                    oddCount=n;
                    evenCount=0;
                }
                else{
                    sums+=oddCount*xj;
                    evenCount=n;
                    oddCount=0;
                }
            }
            cout<<sums<<endl;
        }
    }
    return 0;
}
