#include <bits/stdc++.h>

using namespace std;

void performSort(vector<int>& a)
{
    int length = a.size();
    int numberOfSwaps = 0;
    int temp;
    
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                numberOfSwaps++;
            }
        }
    }
    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a.front()<<endl;
    cout<<"Last Element: "<<a.back()<<endl;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++)
    {
    	cin >> a[a_i];
    }
    performSort(a);
    return 0;
}