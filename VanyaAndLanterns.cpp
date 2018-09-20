#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int lant, street;
    double light = 0;
    cin >> lant >> street;
    long long int n[lant];

    for(int i = 0;i < lant;i++){
        cin>>n[i];
    }

    sort(n,n + lant);

    for(int i = 0;i < lant - 1;i++){
        if(n [ i + 1 ] - n [i] > light){
            light=n[i+1]-n[i];
        }
    }
    light = light/2;
    if (n[0]>light){
        light=n[0];
    }
    if (street - n[lant - 1] > light){
            light = street - n[lant - 1];
        }
    cout << light;

    return 0;
}
