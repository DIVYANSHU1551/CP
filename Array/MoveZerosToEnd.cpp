//Naive T O(n^2)
void moveToEnd(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            if(arr[j]!=0)
            swap(arr[i],arr[j])
        }
    }
}