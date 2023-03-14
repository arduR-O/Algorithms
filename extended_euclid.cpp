#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif
   
int gcd(int a, int b, int &x, int &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    int x1,y1;
    int d = gcd(b,a%b,x1,y1);
    x = y1;
    y = x1 - y1*(a/b);
    return d;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    //freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
    
    
}