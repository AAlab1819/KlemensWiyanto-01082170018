#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int Yb, Gb, Bb;
    long long int Yc, Bc;
    long long int Res;
    cin>>Yc;cin>>Bc;
    cin>>Yb;cin>>Gb;cin>>Bb;
    Yc = Yc - (2*Yb+Gb);
    Bc = Bc - (3*Bb+Gb);
    if (Yc <= 0)
    {
        Yc = Yc * -1;
    }
    else
    {
        Yc = Yc * 0;
    }
    if (Bc <= 0)
    {
        Bc = Bc * -1;
    }
    else
    {
        Bc = Bc*0;
    }
    Res = (Yc+Bc);
    cout << Res;
}
