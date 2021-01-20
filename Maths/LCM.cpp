//Brute  T-O(a*b-max(a,b))
int lcm(int a, int b)
{
    int res=max(a,b);
    while(true)
    {
        if (res%a==0&&
        res%b==0)
        return res;
        res++;
    }
    return res;
}

//Efficient     //a*b=gcd(a,b)*lcm(a,b)  //T-O(log(min(a,b))
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
    int lcm(int a,int b)
    {
        return ((a*b)/gcd(a,b))
    }
    


