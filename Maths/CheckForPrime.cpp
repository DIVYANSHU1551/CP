//brute  t-O(n)
bool isPrime(int n)
{
    if(n==1) return false;
    for(int i =2;i<=n;i++)
    if(n%i==0)
    return false;
    return true;
}

//Divisors always appear in pair  T-O(sqrt N)
bool isPrime(int n)
{
    if(n==1 ) return false;
    for(int i =2;i*i<=n;i++)
    if(n%i==0)
    return false;
    return true;
}
//BY CHECKING N%2==0 AND N%3==0, We can save many iteration for large n 
bool isPrime(int n)
{
    if(n==1)return false;
    if(n==2|| n==3) return true;
    if(n%2==0|| n%3==0)
    return false;
    for(int i=5;i*i<=n;i=i+6)
    if(n%i==0||n%(i+2)==0)
    return false;
    return true;
}