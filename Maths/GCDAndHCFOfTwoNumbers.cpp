//Brute   T-O(min(a,b))
inr gcd(int a,int b)
{
int res=min(a,b);
while(res>0)
{
    if(a%res==0&&b%res==0)
    {
        break
    }
    res--;
}
return res;
}
//EUCLIDEAN ALGO
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;

    }
    return a;
}
//Optimized Euclidean algo
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else 
    return gcd(b,a%b);
}
