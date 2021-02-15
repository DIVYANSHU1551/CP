//good as it is having less no of swap but cycle sort is more optimal
//Basic idea for heap sort
void selectSort(a,n) //always T O(n^2)
{
    for(i=0;i<n-1;i++)
    {
        min_ind=i;
        for(int j=i+1;j<n;j++)
        if(a[j]<a[min_ind])
        min_ind=j;
        swap(a[min_ind,a[i]);
    }
}