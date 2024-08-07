// Problem Statement : Given an array, the task is to reverse the array.

#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        // swap
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    // allocate
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // deallocate
    delete[] a;
}

/*
T.C : O(N)
S.C : O(1)
*/