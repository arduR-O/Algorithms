#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    // freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
    int n, k;
    cin >> n >> k;
    vector<int> rec;
    vector<int> have;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        rec.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        have.push_back(x);
    }
    int l = 0;
    int r = 2000;
    int max = 0;
    while (l <= r)
    {
        int k2 = k;
        int mid = l + (r - l) / 2;
        for (int i = 0; i < n; i++)
        {
            int diff = have[i] - mid*rec[i];
            if(diff<0){
                k2+=diff;
            }
        }
        if(k2<0){
            r = mid-1;
        }
        else{
            max = mid;
            l = mid+1;
        }
    }
    cout<<max;
}