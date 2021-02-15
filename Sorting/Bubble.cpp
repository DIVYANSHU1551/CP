void BubbleSort(int a[],int n)
{
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+i])
            {
                swap(a[j],a[j+1])
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}