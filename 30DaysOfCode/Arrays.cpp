#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int x;
    vector<int> num;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        num.push_back(x);
    }

    for(auto itr=num.rbegin();itr!=num.rend();itr++)
    {
        cout<<*itr<<" ";
    }

    return 0;
}
