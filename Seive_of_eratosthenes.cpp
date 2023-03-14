#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif
   

int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    //freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
    int n = 38;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2;(long long)i*i<=n; i++){
        if( is_prime[i]){
            for(int j = i*i; j<=n; j+=i){
                is_prime[j] = false;
            }
        }
    }
    // pvector(is_prime);
    if(is_prime[n]){
        cout<<"Prime";
    }
    else{
        cout<<"Composite";
    }
    
    
}