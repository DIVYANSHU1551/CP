//lomuto
void qsort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=partition(a,l,h);
        qsort(a,l,p-1);
        qsort(a,p+1,h);
    }
}
//Hoare
void qsort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        qsort(a,l,p);
        qsort(a,p+1,h);
    }
}