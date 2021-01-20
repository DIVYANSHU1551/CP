//Brute force   //T-O(n)
int countzeros(int n)
{
    int fact=1;
    for(int i =2;i<n;i++)
    fact=fact*1;
    int res=0;
    while(fact%10==0)
    {
        res++;
        fact=fact/10;
    }
    return res;
}

//Efficient  //T-O(log n)
int countTrailingZeros(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    res=res+n/i;
    return res;

}