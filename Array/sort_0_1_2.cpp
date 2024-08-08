// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order without using sorting algo.

#include <iostream>
using namespace std;

void sort012(int a[], int n)
{
    int l = 0;
    int m = 0;
    int h = n - 1;

    while (m <= h)
    {
        if (a[m] == 1)
            m++;
        else if (a[m] == 0)
        {
            swap(a[m], a[l]);
            m++;
            l++;
        }
        else
        {
            swap(a[h], a[m]);
            h--;
        }
    }
}

int main()
{
    // input
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // function
    sort012(a, n);

    // output
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;

    return 0;
}