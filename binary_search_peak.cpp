//refer the notes for the theory
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
    vector<int> v = {2,3,4,6,9,12,11,8,6,4,1};
    int l = 0;
    int r = v.size()-1;
    int ans = -1;
    // cout<<"here"<<endl;
    while (l<=r){
        // cout<<"here"<<endl;
        int mid = l + (r-l)/2;
        if (v[mid+1] > v[mid] ){
            l = mid + 1;
        }
        else{
            r = mid - 1;
            ans  = mid;
        }
    }
    cout<<ans;

}