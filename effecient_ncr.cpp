#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif
//I can use _gcd() of stl but I woudl like to implement my own gcd function for the sake of revision
long long int gcd(long long int a, long long int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

//one addition to the gfg code, if r>n then in physical terms, no selection of r items can be made from n
//mathematically it's invalid but i just assume ncr to be 0 in that case because most of the tiem i only use 
//it to find number of selections that can be made of r from n, so just be mindful of this tweak
long long int ncr_tut(int n, int r){
    if(r>n){
        return 0;
    }
    // p will hold the val of n*n-1*n-2...
    // k will hold the value of r*r-1*...
    long long int p =1;
    long long int k =1;

    //going for the optimisation#2 first
    if(r>(n-r)){
        r = n-r;
    }
    if(r!=0){
        while(r){
            //we only need to be running the loop r number of times since we are anyways going to cancel the (n-r)! portion and hence need
            //not even bother computing it... this is optimisation#1
            p*=n;
            k*=r;
            // no need of r-- since while loop is doign that already... using r--in while won't work because when we do that r decreases as soon as loop starts... and then k is multiplied with r-1 instead of r
            long long int m = gcd(p,k);
            p/=m;
            k/=m;
            n--; 
            r--;
        }

    }
    else{
        return 1;
    }
    // return p/k; -> need not do this since we have already cancelled all the gcd and the thing about ncr is
    // it can not be a fraction hence nothing should have been left of k and it should have become 1
    // so we can just return p
    return p;
}

//copyable version
long long int ncr(int n, int r){
    if(r>n){
        return 0;
    }
    long long int p =1;
    long long int k =1;

    if(r>(n-r)){
        r = n-r;
    }
    if(r!=0){
        while(r){
            p*=n;
            k*=r;
            long long int m = __gcd(p,k);
            p/=m;
            k/=m;
            n--; 
            r--;
        }

    }
    else{
        return 1;
    }
    return p;
}
   
int main()
{
#ifndef ONLINE_JUDGE
    freopen(R"(O:\Programming\C++\Problems\input.txt)", "r", stdin);
    //freopen(R"(O:\Programming\C++\Problems\output.txt)", "w", stdin);
#endif
    cout<<ncr(50,25);

}