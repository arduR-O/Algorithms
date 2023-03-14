#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif

void simple_seive(int limit, vector<int> &prime)
{
    vector<bool> mark(limit + 1, true);
    for (int p = 2; (p * p) <= limit; p++)
    {
        if (mark[p])
        {
            for (int i = p * p; i <= limit; i += p)
            {
                mark[i] = 0;
            }
        }
    }
    for (int i = 2; i < limit + 1; i++)
    {
        if (mark[i])
        {
            prime.push_back(i);
        }
    }
}

void segmented_seive(int limit, vector<int> &prime){
    int root = floor(sqrt(limit))+1;
    // vector<int> prime;
    simple_seive(root, prime);
    int lol = root;
    int hol = root*2;
    // cout<<"The value of root: "<<root<<endl;
    pvector(prime);
    // prime.append(prime);
    vector<int> base_prime = prime;
    while(lol < limit){
        // cout<<"The value of lol: "<<lol<<endl;
        // cout<<"The value of hol: "<<hol<<endl;
        if(hol > limit){
            hol = limit;
        }
        vector<bool> mark(hol-lol+1, true);
        for(int i : base_prime){
            int lold;
            if(lol%i){
                //if lol is not divisible by i, I wanna see what I need to add to it to make it divisible by i
                lold = lol + (i - (lol)%i);
            }
            else{
                lold = lol;
            }
            // cout<<"The value of i: "<<i<<endl;
            // cout<<"The value of lold: "<<lold<<endl;
            for(int j = lold; j<=hol; j+=i){
                mark[j - lol] = false;
            } 
        }
        for(int i = 0; i<mark.size(); i++){
            if(mark[i]){
                prime.push_back(i+lol);
            }
        }
        lol+=root;
        hol+=root;
        // cout<<"The value of lol: "<<lol<<endl;
        // cout<<"The value of hol: "<<hol<<endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    // freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
    vector<int> prime;
    segmented_seive(1e9, prime);
    // cout<<"here"<<endl;
    pvector(prime);
}