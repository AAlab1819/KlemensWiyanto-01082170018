#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d;
    int damaged;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        if(i%k == 0)
            {
                damaged++;
            }
        else if(i%l == 0)
            {
                damaged++;
            }
        else if(i%m == 0)
            {
                damaged++;
            }
        else if (i%n == 0)
            {
                damaged++;
            }
    }
    if(damaged == 0)
    {
            cout << damaged;
    }
    else
    {
            damaged = damaged - 1;
            cout << damaged;
    }
    return 0;
}
