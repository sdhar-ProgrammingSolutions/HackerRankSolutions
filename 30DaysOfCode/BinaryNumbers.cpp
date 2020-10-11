#include <bits/stdc++.h>

using namespace std;

vector<int> findBinary(int n)
{
    vector<int> bin;
    vector<int> act;
    int d;

    while(n!=0)
    {
        d = n%2;
        n = n/2;
        bin.push_back(d);
    }
    
    for(auto itr=bin.rbegin();itr!=bin.rend();itr++)
    {
        act.push_back(*itr);
    }

    return act;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> act = findBinary(n);

    vector<int> cvect;
    
    int c = 0;
    
    for(auto val : act)
    {
        if(val==1)
        {
            c++;
            cvect.push_back(c);
        }
        else
        {    
            c = 0;
            continue;
        }
    }

    cout<<*max_element(cvect.begin(),cvect.end())<<endl;

    return 0;
}

