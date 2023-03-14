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
    int arr[] = {4,5,1,2,6};
    for (int i = 0; i < 5; i++)
    {
        //so that the loop does not go out of index, we stop it at 
        //n-1 since we are comparing the element with the next eleement, suppose we were
        //to compare the element witht he previous element, we would have used 1<j<5
        //in each iteration element, if in wrong place, moves a step forward, consider 
        //the worst case scenario when the largest int is at the first place, then it
        //is going to travel to the right spot over n loops, and by that time others
        //will be sorted too
        for (int j = 0; j < 4; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp  = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    
    
}