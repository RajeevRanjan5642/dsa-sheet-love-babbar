// Given an array of size N. The task is to find the maximum and the minimum element of
// the array using the minimum number of comparisons.

#include <iostream>
using namespace std;

pair<int, int> findMinMax(int a[], int n)
{
    int maxi = a[0];
    int mini = a[0];
    int m = n - 1;
    for (int i = 2; i <= m; i += 2)
    {
        if (a[i - 1] < a[i])
        {
            maxi = max(a[i], maxi);
            mini = min(a[i - 1], mini);
        }
        else
        {
            maxi = max(a[i - 1], maxi);
            mini = min(a[i], mini);
        }
    }
    if (m % 2 != 0)
    {
        maxi = max(a[m], maxi);
        mini = min(a[m], mini);
    }
    return {maxi, mini};
}

int main()
{
    int n;
    cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    pair<int, int> p;
    p = findMinMax(a, n);
    cout << p.first << " " << p.second << endl;

    delete[] a;
}

/*
T.C = O(N)
S.C = O(1)
*/