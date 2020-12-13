#include<bits/stdc++.h>

using namespace std;

int maxproduct(int *arr,int n)
{
    int minval =arr[0];
    int maxval =arr[0];

    int maxproduct = arr[0];

    for(int i = 1;i<n;i++){

    if(arr[i]<0)
    swap(maxval,minval);

    maxval =max(arr[i],maxval* arr[i]);
    minval =min(arr[i],minval* arr[i]);

    maxproduct =max(maxproduct ,maxval);


    }

    return maxproduct;


}

int main()
{
    int arr[]={1,2,3,4,5,6};

    int n= sizeof(arr)/sizeof(arr[0]);

    cout <<"maxium subarray product is"<<maxproduct(arr,n)<<endl;

    return 0;
}