//Naive T O(n^2)
int getWater(int arr[], int n)
{
    int res= 0;
    for(int i=1;i<n-1;i++) //as no water at corner
    {
        int lMax=arr[i];
        for(int j=0;j<i;j++)
        lMax=max(lMax,arr[j]);

        int rMax=arr[i];
        for(int j=i+1;j<n;j++)
        rMax=max(rMax,arr[j]);
        res= res+(min(lMax,rMax)-arr[i]);
    }
    return res;
}

//Best  //T O(n) S O(n)we pre compute lmax and rmax 
int getWater(int arr[], int n)
{
    int res=0;
    int lMax[n],rMax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++)
    lmax[i]=max(arr[i],lmax[i-1]);

    rmax(n-1)=arr[n-1];
    for(int i=n-2;i>=0;i--)
    rmax[i]=max(arr[i],rmax[i+1]);

    for(int i=1;i<n-1;i++)
    res=res+(min(lmax[i],rmax[i]-arr[i]));
    return res;
} 