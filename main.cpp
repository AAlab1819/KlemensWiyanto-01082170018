#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a;
    cin>>a;
    long long int x[a];
    long long int s;
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<a-1; i++)
	{
		for(int j=0; j<a-i-1; j++)
		{
			if(x[j]>x[j+1])
			{
				s=x[j];
				x[j]=x[j+1];
				x[j+1]=s;
			}
		}
	}
    long long int d=0;
    for(int i=0;i<a;i++)
    {
        if(x[i]==x[i+1]&&x[i]!=x[i+2]&&x[i]!=0)
        {
            d++;
            i++;
        }
        else if(x[i]==x[i+1]&&x[i]==x[i+2]&&x[i]!=0)
        {
            d=-1;
            break;
        }
    }
    cout<<d;
}
