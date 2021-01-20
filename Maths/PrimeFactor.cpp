//brute   T-O(n^2logn)
void PrimeFactor(int n)
{
    for(int i =2;i<n;i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(n%x==0)
            {
                cout<<i;
                x=x*i;
            }
        }
    }
}

//A NUMBER N CAN BE WRITTEN AS MULTIPLICATION OF POWERS OF PRIMEFACTOR

void PrintPrimeFactor(int n)
{
    if(n<=1)return
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            print(i);
            n=n/i;
        }
    }
    if(n>1)
    cout<<n;
}

//Best   T-O(sqrt N)
void PrintPrimeFactor(int n)
{
    if(n<=1) return;
    while(n%2==0)
    {
        print(2);
        n=n/2;
    }
    while(n%3==0)
    {print(3);
    n=n/3;
    }
    for(int i =5; i*i<=n:i=i+6)
    {
        while(n%i==0)
        {
            print(i);
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            print(i+2);
            n=n/(i+2);
        }
    }
    if(n>3)
    print(n)
    }
}