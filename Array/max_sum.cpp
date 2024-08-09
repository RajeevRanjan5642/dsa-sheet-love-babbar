#include <iostream>
#include <climits>
using namespace std;

int maxSum(int *a, int n)
{
    int max_sum = INT_MIN;
    int max_elt = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += a[i];
        if (curr_sum < 0)
            curr_sum = 0;
        max_sum = max(max_sum, curr_sum);
        max_elt = max(max_elt, a[i]);
    }
    if (max_elt < 0)
        max_sum = max_elt;
    return max_sum;
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
    int ans = maxSum(a, n);
    cout << ans << endl;
    delete[] a;
}