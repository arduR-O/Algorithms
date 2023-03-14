#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif
   
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        int c = a%b;
        gcd(b,c);
    }
}

int lcm(int a, int b){
    int hcf = gcd(a,b);
    return (a*b)/hcf;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    //freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
    cout<<gcd(10000,1000000)<<" "<<lcm(10000,100);
}