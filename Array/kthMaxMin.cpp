/*Given an array arr[] and an integer k where k is smaller than the size of the array,
the task is to find the kth smallest element in the given array.
It is given that all array elements are distinct*/

#include <iostream>
#include <queue>
using namespace std;

pair<int, int> findKthMaxMin(int a[], int n, int k)
{
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for (int i = 0; i < k; i++)
    {
        max_heap.push(a[i]);
        min_heap.push(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (a[i] < max_heap.top())
        {
            max_heap.pop();
            max_heap.push(a[i]);
        }
        if (a[i] > min_heap.top())
        {
            min_heap.pop();
            min_heap.push(a[i]);
        }
    }
    return {max_heap.top(), min_heap.top()};
}

int main()
{

    // input
    int n, k;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;

    // function
    pair<int, int> p = findKthMaxMin(a, n, k);

    // output
    cout << p.first << " " << p.second << endl;
}

/*
T.C = O(Nlog(K))
S.C = O(K)
*/
