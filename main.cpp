#include <bits/stdc++.h>

using namespace std;

void gnomeSort(int arr[], int arr1[], int x);

int main()
{
    int a, b, dragon=0;
    cin>>a>>b;
    int c[a], d[a];
    for(int i = 0; i <= b-1; i++)
    {
        cin>>c[i]>>d[i];
    }
    gnomeSort(c, d, b);
    for(int i = 0; i < b; i++)
    {
        if(a>c[i]&&i==0)
        {
            dragon+=a+d[i];
        }
        else if (dragon>c[i])
        {
            dragon+=d[i];
        }
        else if(dragon<c[i])
        {
            dragon=0;
            break;
        }
        else if (dragon==c[i])
        {
            dragon=0;
            break;
        }
    }
    if(dragon>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

void gnomeSort(int arr[], int arr1[], int x)
{
    int index = 0;

    while (index < x) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(arr[index], arr[index - 1]);
            swap(arr1[index], arr1[index - 1]);
            index--;
        }
    }
}
