#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b,int c,int d)
{
    int l=a;
    if(a>b && a>c && a>d)
    {
        l=a;
    }
    else if(b>a && b>c && b>d)
    {
        l=b;
    }
    else if(c>a && c>b && c>d)
    {
        l=c;
    }
    else if(d>a && d>b && d>c)
    {
        l=d;
    }

    return l;
}


int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}