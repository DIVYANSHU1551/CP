//Iterative
int countdigit(long n)
{
    int count=0
    while(n!=0){
        n=n/10;
        ++count;
    }
    return count;
}

//Recursive 
int countDigit(long n)
{
    if(n==0)
    return 0;
    return 1 + countDigit(n/10);
}

//Logarithmic
int countDigit(long n)
{
return floor(log 10(n)+1);
}
