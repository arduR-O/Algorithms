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
    vector<int> arr = {1,2,3,7,5,4};
    vector<int> v2;
    int s = arr.size();

    //we want the outer loop to run for initial length and inner for
    //curent length
    
    for (int i = 0; i < s; i++)
    {
        int min = arr[0];
        int m = 0;
        pvector(arr);

        for (int j = 0; j < arr.size(); j++)
        {
            // cout<<j<<" ";
            if(arr[j] < min){
                // cout<<"The value of arr[j]: "<<arr[j]<<endl;
                min = arr[j];
                m = j;
                // cout<<"The value of min: "<<min<<endl;

            }
        }
        // cout<<"The value of m: "<<m<<endl;
        vector<int> :: iterator it = arr.begin() + m;
        v2.push_back(min);
        arr.erase(it);
    }
    pvector(v2);
    
    
}