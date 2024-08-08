#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> findUnionIntersect(int *arr1, int n, int *arr2, int m)
{
    vector<int> union_set;
    vector<int> intersect_set;
    int i = 0;
    int j = 0;
    while ((i < n) && (j < m))
    {
        if (arr1[i] == arr2[j])
        {
            union_set.push_back(arr1[i]);
            intersect_set.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            union_set.push_back(arr1[i]);
            i++;
        }
        else
        {
            union_set.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        union_set.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        union_set.push_back(arr2[j]);
        j++;
    }
    return {union_set, intersect_set};
}

int main()
{
    int n, m;
    cin >> n >> m;
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<vector<int>> ans = findUnionIntersect(arr1, n, arr2, m);
    for (auto i : ans[0])
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : ans[1])
    {
        cout << i << " ";
    }
    cout << endl;
    delete[] arr1;
    delete[] arr2;
    return 0;
}