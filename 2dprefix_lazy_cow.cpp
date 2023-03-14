#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
// #include "printerfunc.hpp"
#include "O:\Programming\C++\Problems\printerfunc.hpp"
#endif

int main()
{
    // #ifndef ONLINE_JUDGE
    freopen("O:\\Programming\\C++\\Problems\\input.txt", "r", stdin);
    // freopen("O:\\Programming\\C++\\Problems\\output.txt","w",stdout);
    // #endif
    int n, k;
    cin >> n >> k;
    // vector<vector<int>> grassland;
    cout << "The value of n: " << n << endl;
    cout << "The value of k: " << k << endl;
    int grassland[n + 1][n + 1] = {0};
    // cout<<"here"<<endl;
    for (int i = 0; i <= n; i++)
    {
        // vector<int> row;
        for (int j = 0; j <= n; j++)
        {
            if (!i || !j)
            {
                grassland[i][j] = 0;
                continue;
            }
            int ele;
            cin >> ele;
            grassland[i][j] = ele;
            // cout<<"The value of grassland[i][j]: "<<grassland[i][j]<<endl;
        }
        // grassland[i] = row;
    }
    // for(int i=0;i<6;++i){
    //     for(int j=0;j<6;++j){
    //         cout<<grassland[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    long long int sum_grassland[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        // cout<<"here"<<endl;
        // vector<long long int> row;

        for (int j = 0; j <= n; j++)
        {
            if (!i || !j)
            {
                sum_grassland[i][j] = 0;
                continue;
            }
            long long int sum = grassland[i][j] + sum_grassland[i - 1][j] + sum_grassland[i][j - 1] - sum_grassland[i - 1][j - 1];
            sum_grassland[i][j] = sum;
        }
    }

    for(int i=0;i<6;++i){
        for(int j=0;j<6;++j){
            cout<<sum_grassland[i][j]<<' ';
        }
        cout<<endl;
    }
    long long int max = 0;
    for (int i = 1 + k; i < (n - k + 1); i++)
    {
        for (int j = 1 + k; j < (n - k + 1); j++)
        {
            long long int sum = (sum_grassland[i + k][j] - sum_grassland[i + k][j-1]) + (sum_grassland[i][j + k] - sum_grassland[i - 1][j + k]) - (grassland[i][j]);
            if (sum > max)
            {
                cout<<"The value of i: "<<i<<endl;
                cout<<"The value of j: "<<j<<endl;
                cout<<"The value of sum: "<<sum<<endl;
                max = sum;

            }
        }
    }
    cout<<max;
}