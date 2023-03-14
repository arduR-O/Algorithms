#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
// #include "printerfunc.hpp"
#endif
   
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
#endif
    int x = 250000;
    cin>>x;
    int l,r;
    l=1;
    r=x;
    int flag  = 1;
    while(l<=r){
        int mid = l + (r-l)/2;
        long long int sq = mid*mid;
        // cout<<"The value of l: "<<l<<endl;
        // cout<<"The value of r: "<<r<<endl;
        // cout<<"The value of mid: "<<mid<<endl;
        // cout<<"The value of sq: "<<sq<<endl;
        if(sq==x){
            cout<<"YES";
            flag = 0;
            break;
        }
        if(sq<x){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    if(flag){
    cout<<"NOPE";
    }
}