#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);

int main()
{
    int n;
    double median;
    cin >> n;
    int List[n];
    for(int i = 0; i < n; i++) {
        cin >> List[i];
        heapSort(List, i+1);

        if ((i+1)%2 == 0)
        {
            median = List[i/2]+List[(i/2)+1];
            median = median/2;
        }
        else
        {
            median= List[(i+1)/2];
        }
        cout << fixed << setprecision(1) << median << endl;
    }
    return 0;
}


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int m = 2*i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (m < n && arr[m] > arr[largest])
        largest = m;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
