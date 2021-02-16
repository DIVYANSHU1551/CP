void countSort(a,n,k)
{
    int count[k];
    for(int i=0;i<k;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[a[i]]++;

     int index=0;
     for(int i=0;i<k;i++)
     {
         for(int j=0;j<count[i];j++)
         {
             a[index]=i;
             index++;
         }
     }
}
//Used as a subroutine
//general purpose
void countSort(a,n,k)
{
    int count[k];
    for(int i=0;i<k;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[a[i]]++;
    
    for(int i=1;i<k;i++)
    count[i]=count[i-1]+count[i];
    
    int output[n];
    for(int i=n-1;i>=0;i--)
    output[count[a[i]]-1]=a[i];
    count[a[i]]--;
    for(int i=0;i<n;i++)
    a[i]=output[i];
}