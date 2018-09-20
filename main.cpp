#include<bits/stdc++.h>

using namespace std;

int main()
{
    int level,p,q;
    cin>>level;

    set<int>checker;

    for(int i= 0;i<2;i++)
    {
        cin>>p;
        for(int j=0;j<p;j++)
        {
            cin>>q;
            checker.insert(q);
        }
    }
    if(checker.size()==level)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
