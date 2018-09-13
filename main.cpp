#include <bits/stdc++.h>

using namespace std;

void heapify(int arr[], int x, int s);

void heapSort(int arr[], int n);

int main()
{
    int sv,counter=0;
    cin>>sv;
    int arr[sv];

    for(int i = 0 ; i<sv;i++)
    {
        cin>>arr[i];
    }
    heapSort(arr,sv);
    for(int i=0;i<sv;i++)
    {
        if(arr[i]>arr[0] && arr[i]<arr[sv-1])
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}

void heapify(int arr[], int x, int s)
{
    int largest = s;
    int l = 2*s + 1;
    int r = 2*s + 2;

    if (l < x && arr[l] > arr[largest])
        largest = l;

    if (r < x && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != s)
    {
        swap(arr[s], arr[largest]);
        heapify(arr, x, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
