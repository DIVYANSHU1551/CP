void mergeSort(int a[],int i,int r)
{
    if(r>l) //At least 2 elements
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}