#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif

int gcd(int a, int b ){
    if(b==0){
        return a;
    }
    gcd(b, a%b);
}
void check(int a, int b, int c){
    if(c%gcd(a,b)==0){
        cout<<"Possible";
    }
    else{
        cout<<"Not possible";
    }
} 
int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    //freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
    check(2,5,1);
    
}
