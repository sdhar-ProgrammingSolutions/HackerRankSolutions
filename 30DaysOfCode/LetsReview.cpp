#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    string s;
    
    while(t--)
    {
        cin>>s;
        vector<char> even;
        vector<char> odd;
        int len = s.size();
        for(int i=0;i<len;i++)
        {
            if(i%2==0)
            {
                even.push_back(s.at(i));
            }
            else
            {
                odd.push_back(s.at(i));
            }
        }

        for(auto val:even)
        {
            cout<<val;
        }

        cout<<" ";

        for(auto val:odd)
        {
            cout<<val;
        }
        cout<<endl;
    }      
    return 0;
}
