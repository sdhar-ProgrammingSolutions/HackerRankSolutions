#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n,q;
    cin>>n>>q;
    int temp_q =q;
    vector<vector<int>> arr;

    while(n--)
    {
        int k;
        vector<int> num;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            int x;
            cin>>x;
            num.push_back(x);
        }
        arr.push_back(num);
    }

    vector<vector<int>> queries;
    while(q--)
    {
        for(int i=0;i<2;i++)
        {
            vector<int> temp;
            for(int j=0;j<2;j++)
            {
                int x;
                cin>>x;
                temp.push_back(x);
            }
            queries.push_back(temp);
        }
    }
   
    vector<int> result;
    for(int i=0;i<temp_q;i++)
    {
        int x =queries[i][0];
        int y =queries[i][1];

        result.push_back(arr[x][y]);
    }

    for(auto val : result)
    {
        cout<<val<<endl;
    }
      
    return 0;
}