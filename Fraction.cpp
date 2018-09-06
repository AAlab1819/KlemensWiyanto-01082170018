#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  int up, down;
  int x;

    cin >> n;

    if ( n % 2 == 0)
    {
        x = n/2;
        if (x%2==0)
        {
            up = x-1;
            down = n-up;
        }
        else
        {
            up = x-2;
            down = n-up;
        }
    }
    else
    {
         up = n/2;
        down = n-up;
    }


    cout << up << " " << down;
}
