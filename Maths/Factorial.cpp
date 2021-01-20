//Iterative
int fact(int n)
{
    int res=1;
    for(int i=2;i<=n;i++)
    res=res*i;
    return res;
}

//Recursive
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);

}
