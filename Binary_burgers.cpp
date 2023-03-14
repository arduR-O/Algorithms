// #include <bits/stdc++.h>
// using namespace std;
// #ifndef ONLINE_JUDGE
// #include "printerfunc.hpp"
// #endif

// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
// // freopen("output.txt","w",stdout);
// #endif
//     string r;
//     cin>>r;
//     int nb,ns,nc,pb,ps,pc;
//     long long int rub;
//     cin>>nb>>ns>>nc>>pb>>ps>>pc>>rub;
//     int burger=0;
//     int b = 0;
//     int s = 0;
//     int c = 0;
//     for(char i : r){
//         if(i=='B'){
//             b++;
//         }
//         else if(i=='C'){
//             c++;
//         }
//         else if(i=='s'){
//             s++;
//         }
//     }
//     while(true){
//         nb-=b;
//         nc-=c;
//         ns-=s;
//         // //db
//         // cout<<"nb= "<<nb<<endl;
//         // cout<<"nc= "<<nc<<endl;
//         // cout<<"ns= "<<ns<<endl;
//         // cout<<"burger= "<<burger<<endl;
//         // cout<<"Rubles= "<<rub<<endl;
//         // //db
//         // cout<<"here";
//         if(nb>=0 && nc>=0 && ns>=0){
//             burger++;
//         }
//         else{
//             int flagb = 1;
//             int flagc = 1;
//             int flags = 1;
//             if(nb<0){
//                 flagb = 0;
//                 while(rub>=pb && nb<0){
//                     nb++;
//                     rub-=pb;
//                 }
//                 if(nb>=0){
//                     flagb = 1;
//                 }
//                 else{
//                     break;
//                 }
//             }

//             if(nc<0){
//                 flagc = 0;
//                 while(rub>=pc && nc<0){
//                     nc++;
//                     rub-=pc;
//                 }
//                 if(nc>=0){
//                     flagc = 1;
//                 }
//                 else{
//                     break;
//                 }
//             }

//             if(ns<0){
//                 flags = 0;
//                 while(rub>=ps && ns<0){
//                     ns++;
//                     rub-=ps;
//                 }
//                 if(ns>=0){
//                     flags = 1;
//                 }
//                 else{
//                     break;
//                 }
//             }

//             if(flagb && flagc && flags){
//                 burger++;
//             }
//         }
//     }
//     cout<<burger;

// }

#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "printerfunc.hpp"
#endif

long long int makeburger(long long int n,int nb,int ns,int nc,int pb,int ps,int pc, long long int rub, int b, int s, int c){
    // cout<<"new"<<endl;
    // cout<<rub<<endl;
    long long int rb = nb;
    long long int rs = ns;
    long long int rc = nc;
    if(nb<b*n && nb>0){ rb = b*n - nb;} else{pb = 0;}
    if(nc<c*n && nc>0){ rc = c*n - nc;} else{pc = 0;}
    if(ns<s*n && ns>0){ rs = s*n - ns;} else{ps = 0;}
    long long int ans = rub - (rb*pb + rc*pc + rs*ps);
    // cout<<n<<endl;
    // cout<<"recipe: "<<b<<" "<<s<<" "<<c<<endl;
    // cout<<nb<<" "<<ns<<" "<<nc<<endl;
    // cout<<rb<<" "<<rs<<" "<<rc<<endl;
    // cout<<pb<<" "<<ps<<" "<<pc<<endl;
    // cout<<ans<<endl;
    return ans;

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif
    string st;
    cin >> st;

    int nb, ns, nc, pb, ps, pc;
    long long int rub;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> rub;
    int b = 0;
    int s = 0;
    int c = 0;

    for (char i : st)
    {
        if (i == 'B')
        {
            b++;
        }
        else if (i == 'C')
        {
            c++;
        }
        else if (i == 'S')
        {
            s++;
        }
    }

    long long int l  = 0;
    long long int r = 1e13;
    long long int max= 0;
    int flag =1;
    while(l<=r){
        long long int mid = l + (r - l)/2;
        long long int rub2 = makeburger(mid,nb, ns, nc, pb, ps, pc,rub,b,s,c);
        // cout<<mid<<" "<<rub2<<endl;
        if(rub2 > 0){
            l = mid+1;
            max = mid;
        }
        else if(rub2 < 0){
            r = mid-1;
        }
        else{
            cout<<mid<<endl;
            flag = 0;
            break;
        }
        // cout<<"L= "<<l<<endl;
        // cout<<"R= "<<r<<endl;

    }
    if(flag){cout<<max<<endl;}
}