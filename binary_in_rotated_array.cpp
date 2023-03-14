#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "printerfunc.hpp"
#endif

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif
    vector<int> v = {9,12,13,3,2,4,7};
    int l = 0;
    cout<<"here";
    int r = v.size()-1;
    int mid = l+(r-l)/2;
    if(v[mid]<=v[l]){
    cout<<0;
    while( l<=r){
        cout<<1;
        if(v[mid]<v[l]){
            r = mid - 1;
        }
        else{
               cout<<mid;
               break;
           }
      }
    }
}