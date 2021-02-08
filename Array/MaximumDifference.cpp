//Naive T O(N^2)
int maxDiff(int arr[], int n)
{
    int res=arr[i]-arr[0];
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    res=max(res, arr[j]-arr[i]);
    return res;
}
//best 
int maxDiff(int arr[],int n)
{
    int res=arr[i]-arr[0], minval=arr[0];
    for(int j=1;j<n;j++)
    {
        res=max(res,arr[j]-minVal);
        minVal=min(minVal,arr[j]);
    }
    return res;
}