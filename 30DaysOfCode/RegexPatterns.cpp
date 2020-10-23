#include <bits/stdc++.h>
#include <regex>
using namespace std;

void printDetails(map<string,string> &Details);

void printDetails(map<string,string> &Details)
{
    regex match(".+@gmail\\.com$");
    vector<string> temp;
    for(auto val : Details)
    {
        if(regex_match(val.first, match))
        {
            temp.push_back(val.second);
        }
    }
    sort(temp.begin(),temp.end());

    for(auto v : temp)
    {
        cout<<v<<endl;
    }
}


int main()
{
    int N;
    cin >> N;
    map<string, string> Details;
    string firstName, emailID;

    for (int N_itr = 0; N_itr < N; N_itr++) 
    {
        cin>>firstName;
        cin>>emailID;

        Details.insert({emailID, firstName});
    }

    printDetails(Details);

    return 0;
}

