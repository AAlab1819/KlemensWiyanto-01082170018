#include <bits/stdc++.h>
using namespace std;

struct trend
{
    int id;
    int zNew;
};

void heapify(vector<trend> & Vector, long long int n, long long int i);
void heapSort(vector<trend> &Vector, long long int n);

int main()
{
    long long int oldZScore;
    long long int posts;
    long long int like;
    long long int share;
    long long int testCase;
    long long int topicId;
    long long int comment;
    long long int newZScore;

    map<int, vector<trend> >myMap;

    cin>>testCase;
    while (testCase--)
    {
        cin>> topicId >> oldZScore >> posts >> like >> comment >> share;
        posts = posts * 50LL;
        like = like * 5LL;
        comment = comment * 10LL;
        share = share * 20LL;
        newZScore = posts + like + comment + share;

        trend Trending;
        Trending.id = topicId;
        Trending.zNew = newZScore;

        myMap[newZScore - oldZScore].push_back(Trending);
    }

    map<int, vector<trend> >::iterator it;

    for (it = myMap.begin(); it != myMap.end(); it++)
    {
        heapSort(it->second, it->second.size());
    }

    cout<<endl;struct trend
{
    int id;
    int zNew;
};

    int counter = 1;
    for (it = myMap.end(); it!= myMap.begin(); it--)
    {
        for (int i=0; i<it->second.size(); i++)
        {
            cout<<it->second[i].id<<" "<<it->second[i].zNew<<endl;
            if (++counter > 5)
            {
                break;
            }
        }
        if (counter > 5)
        {
            break;struct trend
{
    int id;
    int zNew;
};
        }
    }

}

void heapify(vector<trend> & Vector, long long int n, long long int i)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && Vector[l].id < Vector[smallest].id)
        smallest = l;
    if (r < n && Vector[r].id < Vector[smallest].id)
        smallest = r;
    if (smallest != i) {
        swap(Vector[i], Vector[smallest]);
        heapify(Vector, n, smallest);
    }
}
void heapSort(vector<trend> &Vector, long long int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(Vector, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(Vector[0], Vector[i]);
        heapify(Vector, i, 0);
    }
}
