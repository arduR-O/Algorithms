#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif

long long int power(long long int a,long long int b){
    long long int result = 1;
    long long int m;
    while(b> 0){
        if(b%2) result = (result * a) % m;
        a = (a*a)%m;
        b/=2;
    }
    return result;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    //freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
 
}