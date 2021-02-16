//naive T O(n) S O(n) BUT STABLE AND LESS USED
void partition(int a[],int l, int h, int p)
{
    int temp[h-l+1], index =0;
    for(int i=l;i<=h;i++)
    if(a[i]<=a[p])
    {
        temp[index]= arr[i];
        index++;
        for(int i=l;i<=h;i++)
        if(a[i]> a[p])
        {
            temp[index]=a[i];index++;
        }
        for(int i=l;i<=h;i++)
        a[i]= temp[i-l];
    }
}
//Lomuto 
int lpartition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    for(int j=l; j<=h-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return(i+1);
}
//Hoare  best one  not stable
int partition(int a[], int l,int h)
{
    int pivot=a[];
    int i=l-1,j=h+1;
    while(true)
    {
        do{
            i++;
        }
        while(a[i]<pivot)
        do
        {
            j--;
        } while (a[i]>pivot)
        if(i>=j)
        return j;
        swap(a[i],a[j]);
        
    }
}