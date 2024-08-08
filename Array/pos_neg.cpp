#include <iostream>
using namespace std;

void posNeg(int* a,int n){
    int l=0;
    int h=n-1;
    while(l<=h){
        if(a[l]<0) l++;
        else{
            swap(a[l],a[h]);
            h--;
        }
    }
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
    posNeg(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    delete[] a;
}