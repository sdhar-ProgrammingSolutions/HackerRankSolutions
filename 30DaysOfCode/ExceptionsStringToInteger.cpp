#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stdexcept>

using namespace std;


int main()
{
    string S;
    cin >> S;
    try
    {
        int result = stoi(S);
        cout<<result<<endl;
    }
    catch(std::invalid_argument &e)
    {
        cout<<"Bad String"<<endl;
    }
    catch(std::out_of_range &e)
    {
        cout<<"Bad String"<<endl;
    }

    return 0;
}
