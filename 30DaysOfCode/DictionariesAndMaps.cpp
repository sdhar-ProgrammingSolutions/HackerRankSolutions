#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    map<string,int> detailsOfPeople;
    string name;
    int number;

    for(int i=0;i<n;i++)
    {
        cin>>name;
        cin>>number;
        detailsOfPeople.insert(make_pair(name, number));
    }

    while(cin>>name)
    {
        auto itr = detailsOfPeople.find(name);
        if(itr!= detailsOfPeople.end())
        {
            cout<<itr->first<<"="<<itr->second<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}