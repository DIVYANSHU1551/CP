#include <iostream>
#include <algorithm>
 using namespace std;

 int kthsmallest(int arr[],int n,int k)
 {
     sort(arr,arr+n);

     return arr[k-1];
 }

 int main()
 {
     int arr[]={1,2,3,4,5,6};
     int n = sizeof(arr)/sizeof(arr[0]),k=2;
     cout<<"kth smallest element is "<<kthsmallest(arr , n ,k);
     return 0;
 }