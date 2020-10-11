#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    int value=1;
    if(n<1)
    {
        value = 1;
    }
    else
    {
        value = n*factorial(n-1);
    }
    return value;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
