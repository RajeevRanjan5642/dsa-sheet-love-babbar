/*Given an array arr, rotate the array by one position in clock-wise direction.*/

#include<iostream>
using namespace std;

void rotate(int* arr,int n){
    for(int i=n-1; i>0; i--){
        swap(arr[i],arr[i-1]);
    }
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //function
    rotate(arr,n);
    //output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
}